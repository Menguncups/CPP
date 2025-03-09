#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int prioritas(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixKePostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char c : infix) {
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else if (c == ' ') {
            continue;
        } else {
            while (!s.empty() && prioritas(s.top()) >= prioritas(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int hitungPostfix(string postfix) {
    stack<int> s;
    
    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();

            switch (c) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    return s.top();
}

int main() {
    string infix;
    cout << "Masukkan ekspresi infix: ";
    getline(cin, infix);

    string postfix = infixKePostfix(infix);
    int hasil = hitungPostfix(postfix);

    cout << "Postfix : " << postfix << endl;
    cout << "Hasil   : " << hasil << endl;
    
    system("pause");
    return 0;
}
