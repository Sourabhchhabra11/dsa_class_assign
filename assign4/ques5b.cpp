#include <iostream>
using namespace std;
#define MAX 100

class Queue {
    int arr[MAX], f, r, cnt;
public:
    Queue() { f=0; r=-1; cnt=0; }
    bool empty() { return cnt==0; }
    void push(int x) { if(cnt<MAX){ r=(r+1)%MAX; arr[r]=x; cnt++; } }
    int pop() { if(empty()) return -1; int v=arr[f]; f=(f+1)%MAX; cnt--; return v; }
    int size() { return cnt; }
    int front() { return arr[f]; }
};

class Stack {
    Queue q;
public:
    void push(int x) {
        int n = q.size();
        q.push(x);
        for (int i = 0; i < n; i++) q.push(q.pop());
    }
    int pop() { return q.empty() ? -1 : q.pop(); }
    int top() { return q.empty() ? -1 : q.front(); }
    bool empty() { return q.empty(); }
};

int main() {
    Stack st;
    st.push(5); st.push(15); st.push(25);
    cout << st.pop() << " ";
    cout << st.top() << " ";
    return 0;
}
