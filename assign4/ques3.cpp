#include <iostream>
using namespace std;
#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear, count;
public:
    Queue() { front = 0; rear = -1; count = 0; }
    bool isEmpty() { return count == 0; }
    bool isFull() { return count == MAX; }
    void enqueue(int x) {
        if (isFull()) return;
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;
    }
    int dequeue() {
        if (isEmpty()) return -1;
        int x = arr[front];
        front = (front + 1) % MAX;
        count--;
        return x;
    }
    int size() { return count; }
    int frontVal() { return arr[front]; }
    void display() {
        for (int i = 0; i < count; i++)
            cout << arr[(front + i) % MAX] << " ";
        cout << "\n";
    }
};

int main() {
    Queue q, first;
    int x;
    while (cin >> x) q.enqueue(x);
    int n = q.size();
    if (n % 2 != 0) { cout << "even number needed\n"; return 0; }
    int half = n / 2;
    for (int i = 0; i < half; i++) first.enqueue(q.dequeue());
    for (int i = 0; i < half; i++) {
        q.enqueue(first.dequeue());
        q.enqueue(q.dequeue());
    }
    q.display();
    return 0;
}
