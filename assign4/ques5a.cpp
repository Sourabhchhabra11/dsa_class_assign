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
    Queue q1, q2;
public:
    void push(int x) { q2.push(x); while(!q1.empty()) { q2.push(q1.pop()); } Queue tmp=q1; q1=q2; q2=tmp; }
    int pop() { return q1.empty() ? -1 : q1.pop(); }
    int top() { return q1.empty() ? -1 : q1.front(); }
    bool empty() { return q1.empty(); }
};

int main() {
    Stack st;
    st.push(10); st.push(20); st.push(30);
    cout << st.pop() << " ";
    cout << st.top() << " ";
    return 0;
}
