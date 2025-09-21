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

int countOccurrences(int key) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == key) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

void deleteOccurrences(int key) {
    while (head != nullptr && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* curr = head;
    Node* prev = nullptr;
    while (curr != nullptr) {
        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

void displayList() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) cout << "->";
        temp = temp->next;
    }
    cout << "\n";
}

int main() {
    int n, val, key;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        insertAtEnd(val);
    }
    cout << "Enter key to count and delete: ";
    cin >> key;

    int count = countOccurrences(key);
    cout << "Count: " << count << "\n";

    deleteOccurrences(key);

    cout << "Updated Linked List: ";
    displayList();

    return 0;
}
