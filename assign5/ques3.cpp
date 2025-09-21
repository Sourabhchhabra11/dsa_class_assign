#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtEnd(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int findMiddle() {
    if (head == nullptr) return -1;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main() {
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertAtEnd(val);
    }

    int middle = findMiddle();
    if (middle == -1) {
        cout << "List is empty.\n";
    } else {
        cout << "Middle element: " << middle << "\n";
    }

    return 0;
}
