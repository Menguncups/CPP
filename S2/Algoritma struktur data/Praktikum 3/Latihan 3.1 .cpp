#include <iostream>
using namespace std;

#define MAX 5 

class CircularQueue {
private:
    int arr[MAX];
    int front, rear, count;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
        count = 0;
    }

    bool isFull() {
        return count == MAX;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Push (" << value << ") -> Penuh" << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = value;
        if (front == -1) front = 0;
        count++;
        printQueue();
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong!" << endl;
            return;
        }
        front = (front + 1) % MAX;
        count--;
        if (count == 0) {
            front = -1;
            rear = -1;
        }
        printQueue();
    }

    void printQueue() {
        cout << "Queue: ";
        if (isEmpty()) {
            cout << "(kosong)";
        } else {
            int i = front;
            for (int j = 0; j < count; j++) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX;
            }
        }
        cout << endl;
    }
};

int main() {
    CircularQueue cq;

    cq.enqueue(5);
    cq.enqueue(6);
    cq.enqueue(7);
    cq.dequeue();
    cq.enqueue(8);
    cq.dequeue();
    cq.enqueue(9);
    cq.dequeue();
    cq.enqueue(10);
    cq.enqueue(11);
    cq.enqueue(12);

    system("pause");
    return 0;
}
