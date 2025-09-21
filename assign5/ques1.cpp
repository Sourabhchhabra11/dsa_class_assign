// #include<iostream>
// using namespace std;

// struct LL {
//     int data;
//     LL *next;
// };

// LL *head = NULL;      
// int countNodes = 0;

// void search(int x) {
//     LL *cur = head;
//     while (cur) {
//         if (cur->data == x) {
//             cout << "nod is found.\n";
//             countNodes++;
//         }
//         cur = cur->next;
//     }
//     if (countNodes == 0) cout << "node is not available.\n";
// }

// int main() {
//     int n;
//     cout << "enter the value of n : ";
//     cin >> n;

//     LL *tail = NULL;

//     for (int i = 0; i < n; i++) {
//         LL *temp = new LL;
//         cin >> temp->data;
//         temp->next = NULL;

//         if (head == NULL) {
//             head = temp;
//             tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     cout << "given numbers are : \n";
//     LL *p = head;
//     while (p) {                   
//         cout << p->data << "\n";
//         p = p->next;
//     }

//     search(20);
//     search(10);
//     search(30);
//     cout << "total nods found are : " << countNodes << "\n";
//   LL *x = tail;
//   LL *temp;
// while(x!=head){
//   x->next = head;
//   cout<<x->next;
// }
//   return 0;
// }


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

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

void insertBeforeAfter(int target, int value, bool before) {
    if (head == nullptr) {
        cout << "List is empty, cannot insert.\n";
        return;
    }

    if (before) {
        if (head->data == target) {
            insertAtBeginning(value);
            return;
        }

        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr && curr->data != target) {
            prev = curr;
            curr = curr->next;
        }
        if (curr == nullptr) {
            cout << "Target node not found.\n";
            return;
        }

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = curr;
        prev->next = newNode;

    } else {
        Node* curr = head;
        while (curr != nullptr && curr->data != target) {
            curr = curr->next;
        }
        if (curr == nullptr) {
            cout << "Target node not found.\n";
            return;
        }

        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void deleteFromBeginning() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Deleted node from beginning.\n";
}

void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "Deleted node from end.\n";
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    cout << "Deleted node from end.\n";
}

void deleteNode(int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted node with value " << value << ".\n";
        return;
    }
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr && curr->data != value) {
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr) {
        cout << "Node with value " << value << " not found.\n";
        return;
    }
    prev->next = curr->next;
    delete curr;
    cout << "Deleted node with value " << value << ".\n";
}

void searchNode(int value) {
    Node* temp = head;
    int pos = 1;
    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Node with value " << value << " found at position " << pos << ".\n";
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Node with value " << value << " not found.\n";
}

void displayList() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int choice, val, target;
    bool before;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert before/after a node\n";
        cout << "4. Delete from beginning\n";
        cout << "5. Delete from end\n";
        cout << "6. Delete a specific node\n";
        cout << "7. Search for a node\n";
        cout << "8. Display all nodes\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> val;
                insertAtBeginning(val);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> val;
                insertAtEnd(val);
                break;
            case 3:
                cout << "Enter target node value: ";
                cin >> target;
                cout << "Enter value to insert: ";
                cin >> val;
                cout << "Insert before or after? (1 for before, 0 for after): ";
                cin >> before;
                insertBeforeAfter(target, val, before);
                break;
            case 4:
                deleteFromBeginning();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                cout << "Enter node value to delete: ";
                cin >> val;
                deleteNode(val);
                break;
            case 7:
                cout << "Enter node value to search: ";
                cin >> val;
                searchNode(val);
                break;
            case 8:
                displayList();
                break;
            case 9:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
