#include <iostream>
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

class MyLinkedList {
private:
    Node* head;
    Node* tail;
    int length;
public:
    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }      

    void insertAtTail(int val) {
        Node* n = new Node(val);
        if(length == 0) head = tail = n;
        else {
            tail->next = n;
            tail = n;
        }
        length++;
    }

    // Traversal and Display Function
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }  
};

int main() {
    MyLinkedList list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    
    // Traversing and printing the list
    list.display();
}