#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string input = "E A S * Y * Q U E * * * S T * * * I O * N * * *";

    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '*') {
            if (!s.empty()) {
                cout << s.top() << " ";
                s.pop();
            }
        } else if (input[i] != ' ') {
            s.push(input[i]);
        }
    }

    system("pause");
    return 0;
}