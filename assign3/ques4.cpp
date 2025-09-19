#include <iostream>
#include <cctype>  
using namespace std;

#define MAX 100
char stackArr[MAX];
int top = -1;


bool isEmpty() { return (top == -1); }
bool isFull() { return (top == MAX - 1); }

void push(char ch) {
    if (isFull()) {
        cout << "Stack Overflow!" << endl;
    } else {
        stackArr[++top] = ch;
    }
}

char pop() {
    if (isEmpty()) {
        return '\0';
    } else {
        return stackArr[top--];
    }
}

char peek() {
    if (isEmpty()) return '\0';
    return stackArr[top];
}


int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

string infixToPostfix(string infix) {
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        
        if (isalnum(ch)) {
            postfix += ch;
        }
        
        else if (ch == '(') {
            push(ch);
        }
        
        else if (ch == ')') {
            while (!isEmpty() && peek() != '(') {
                postfix += pop();
            }
            pop(); 
        }
        
        else {
            while (!isEmpty() && precedence(peek()) >= precedence(ch)) {
                postfix += pop();
            }
            push(ch);
        }
    }

    while (!isEmpty()) {
        postfix += pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
