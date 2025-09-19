#include <iostream>
using namespace std;
#define MAX 1000

class Queue {
    char arr[MAX];
    int front, rear, count;
public:
    Queue() { front = 0; rear = -1; count = 0; }
    bool isEmpty() { return count == 0; }
    void enqueue(char c) {
        if (count == MAX) return;
        rear = (rear + 1) % MAX;
        arr[rear] = c;
        count++;
    }
    void dequeue() {
        if (isEmpty()) return;
        front = (front + 1) % MAX;
        count--;
    }
    char frontVal() { return arr[front]; }
};

int main() {
    string s;
    getline(cin, s);
    Queue q;
    int freq[256] = {0};
    for (char c : s) {
        if (c == ' ') continue;
        freq[(unsigned char)c]++;
        q.enqueue(c);
        while (!q.isEmpty() && freq[(unsigned char)q.frontVal()] > 1) q.dequeue();
        if (q.isEmpty()) cout << "-1 ";
        else cout << q.frontVal() << " ";
    }
    return 0;
}
