
#include<iostream>
using namespace std;

class Node {
public:
    Node* next;
    int val;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Display Linked List
void display(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Deletion at End
void deletionAtEnd(Node* &head) {

    // Case 1: Empty Linked List
    if(head == NULL) {
        return;
    }

    // Case 2: Only One Node
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    // Case 3: Multiple Nodes
    Node* temp = head;

    // Reach Second Last Node
    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    // Delete Last Node
    delete temp->next;

    // Make Second Last Node the Last Node
    temp->next = NULL;
}

int main() {

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    // Connecting Nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Before Deletion: " << endl;
    display(a);

    cout << "After Deletion: " << endl;
    deletionAtEnd(a);
    display(a);

    return 0;
}
