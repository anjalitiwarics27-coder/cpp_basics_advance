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

void display(Node* head) {

    if(head == NULL) return;
    display(head->next);
    cout << head->val << " ";

}

int main() {

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    display(a);

    return 0;
}
