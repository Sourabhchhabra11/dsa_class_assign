#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

#define MAX 100
int s[MAX];
int top = -1;

bool isempty() { return top == -1; }
bool isfull() { return top == MAX - 1; }

void push(int x) {
    if (!isfull()) s[++top] = x;
}

int pop() {
    if (!isempty()) return s[top--];
    return -1;
}

int eval(string exp) {
    for (int i = 0; i < exp.length(); i++) {
        char c = exp[i];
        if (isdigit(c)) {
            push(c - '0');
        } else {
            int b = pop();
            int a = pop();
            switch (c) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push(pow(a, b)); break;
            }
        }
    }
    return pop();
}

int main() {
    string exp;
    cin >> exp;
    cout << eval(exp);
}
