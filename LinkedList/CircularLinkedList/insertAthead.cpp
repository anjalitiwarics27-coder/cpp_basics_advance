
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Traversal
void display(Node* head) {

    if(head == NULL) return;

    Node* temp = head;

    while(true) {
        cout << temp->val << " ";
        temp = temp->next;

        if(temp == head) break;
    }

    cout << endl;
}

// Insert at Beginning
void insertAtBegin(Node* &head, int val) {

    Node* newNode = new Node(val);

    // Empty linked list
    if(head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    // Find last node
    Node* temp = head;

    while(temp->next != head) {
        temp = temp->next;
    }

    // Insertion
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

int main() {

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Circular connection
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node* head = a;

    cout << "Before insertion: ";
    display(head);

    insertAtBegin(head, 5);

    cout << "After insertion: ";
    display(head);

    return 0;
}
