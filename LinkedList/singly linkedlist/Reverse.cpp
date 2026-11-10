
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

// Display function
void display(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Reverse function
Node* reverseal(Node* head) {

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {

        Node* nextNode = curr->next;

        curr->next = prev;

        prev = curr;
        curr = nextNode;
    }

    return prev;
}

int main() {

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    // Attach the nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cout << "Traversal: " << endl;
    display(a);

    cout << "Reversal: " << endl;

    Node* newHead = reverseal(a);

    display(newHead);

    return 0;
}
