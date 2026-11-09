
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

// Display Linked List
void display(Node* head) {

    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Deletion at Position
void deletionAtPosition(Node* &head, int pos) {

    // Negative position
    if(pos < 0) {
        cout << "Invalid Position!" << endl;
        return;
    }

    // Empty Linked List
    if(head == NULL) {
        cout << "Linked List is Empty!" << endl;
        return;
    }

    // Deletion at Beginning
    if(pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    // Reach previous node
    for(int i = 0; i < pos - 1; i++) {

        if(temp == NULL) {
            cout << "Invalid Position!" << endl;
            return;
        }

        temp = temp->next;
    }

    // Position out of bounds
    if(temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds!" << endl;
        return;
    }

    // Delete required node
    Node* del = temp->next;

    temp->next = del->next;

    delete del;
}

int main() {

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    // Connect Nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    cout << "Before Deletion: " << endl;
    display(a);

    deletionAtPosition(a, 3);

    cout << "After Deletion: " << endl;
    display(a);

    return 0;
}
