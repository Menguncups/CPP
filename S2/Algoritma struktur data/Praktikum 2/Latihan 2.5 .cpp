#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

bool cekKurungLengkap(const string &infix) {
    stack<char> s;
    for (char ch : infix) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}

bool cekOperatorOperand(const vector<string> &tokens) {
    for (size_t i = 0; i < tokens.size(); i++) {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
            if (i == 0 || i == tokens.size() - 1 || !isdigit(tokens[i - 1][0]) || !isdigit(tokens[i + 1][0])) {
                return false;
            }
        }
    }
    return true;
}

bool cekOperatorLengkap(const vector<string> &tokens) {
    for (size_t i = 0; i < tokens.size() - 1; i++) {
        if (isdigit(tokens[i][0]) && tokens[i + 1] == "(") {
            return false;
        }
    }
    return true;
}

void cekValiditasInfix(const string &infix) {
    if (!cekKurungLengkap(infix)) {
        cout << "Notasi infix salah, kurung tidak lengkap" << endl;
        return;
    }

    istringstream iss(infix);
    vector<string> tokens;
    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }

    if (!cekOperatorOperand(tokens)) {
        cout << "Notasi infix salah, operand tidak lengkap" << endl;
        return;
    }

    if (!cekOperatorLengkap(tokens)) {
        cout << "Notasi infix salah, operator tidak lengkap" << endl;
        return;
    }

    cout << "Notasi infix benar" << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah notasi yang ingin dicek: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string infix;
        cout << "Masukkan notasi infix ke-" << i + 1 << ": ";
        getline(cin, infix);

        cekValiditasInfix(infix);
    }

    system("pause");
    return 0;
}
