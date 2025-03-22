#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> s1, s2;

public:
    void addQ(int x) {
        s1.push(x);
    }

    void removeQ() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            s2.pop();
        } else {
            cout << "Queue kosong!" << endl;
        }
    }

    int front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.empty() ? -1 : s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }

    void printQueue() {
        stack<int> temp1 = s1, temp2 = s2;
        stack<int> reversed;

        while (!temp1.empty()) {
            reversed.push(temp1.top());
            temp1.pop();
        }

        while (!reversed.empty()) {
            cout << reversed.top() << " ";
            reversed.pop();
        }

        while (!temp2.empty()) {
            cout << temp2.top() << " ";
            temp2.pop();
        }

        cout << endl;
    }
};

int main() {
    QueueUsingStacks q;

    q.addQ(1);
    q.addQ(2);
    q.addQ(3);
    q.printQueue();

    q.removeQ();
    q.printQueue();

    q.addQ(4);
    q.printQueue();

    cout << "Front: " << q.front() << endl;
    cout << "Is Empty: " << (q.isEmpty() ? "Yes" : "No") << endl;

    system("pause");
    return 0;
}
