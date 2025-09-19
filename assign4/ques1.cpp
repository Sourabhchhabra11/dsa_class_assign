#include <iostream>
using namespace std;
#define MAX 50

class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() { front = -1; rear = -1; }
    bool isEmpty() { return front == -1; }
    bool isFull() { return rear == MAX - 1; }
    void enqueue(int x) {
        if (isFull()) { cout << "Queue full\n"; return; }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " added\n";
    }
    void dequeue() {
        if (isEmpty()) { cout << "Queue empty\n"; return; }
        cout << arr[front] << " removed\n";
        if (front == rear) { front = -1; rear = -1; }
        else front++;
    }
    void peek() {
        if (isEmpty()) cout << "Queue empty\n";
        else cout << "Front: " << arr[front] << "\n";
    }
    void display() {
        if (isEmpty()) { cout << "Queue empty\n"; return; }
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    Queue q;
    int ch, val;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Check Empty 6.Check Full 0.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: cin >> val; q.enqueue(val); break;
            case 2: q.dequeue(); break;
            case 3: q.peek(); break;
            case 4: q.display(); break;
            case 5: cout << (q.isEmpty() ? "Empty\n" : "Not empty\n"); break;
            case 6: cout << (q.isFull() ? "Full\n" : "Not full\n"); break;
        }
    } while (ch != 0);
    return 0;
}
