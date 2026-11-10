
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

    // Display Linked List
    void display() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    // Insert At Tail
    void insertAtTail(int val) {
        Node* n = new Node(val);

        if(length == 0) {
            head = tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }

        length++;
    }

    // Insert At Head
    void insertAtHead(int val) {
        Node* n = new Node(val);

        if(length == 0) {
            head = tail = n;
        }
        else {
            n->next = head;
            head = n;
        }

        length++;
    }

    // Remove At Head
    void removeAtHead() {

        if(length == 0) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;

        length--;

        if(length == 0) {
            tail = NULL;
        }
    }

    // Return Size
    int size() {
        return length;
    }

    // Get Value At Index
    int get(int idx) {

        if(idx < 0 || idx >= length) {
            cout << "Invalid Index!" << endl;
            return -1;
        }

        Node* temp = head;

        for(int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        return temp->val;
    }
    void remove (int idx){
        if(idx<0||idx>=length){
            cout<<"invalid Index "<<endl;
            return;
        }
        if(idx==0){
            removeAtHead();
            return;
        }
        Node* temp = head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        Node* tobeDeleted= temp->next;
        temp->next=temp->next->next;
        if(idx==length-1) tail = temp ; //imp
        delete tobeDeleted;
        length--;
    }

    // Insert At Any Index
    void insert(int idx, int val) {

        if(idx < 0 || idx > length) {
            cout << "Invalid Index!" << endl;
            return;
        }

        // Insert At Head
        if(idx == 0) {
            insertAtHead(val);
            return;
        }

        // Insert At Tail
        if(idx == length) {
            insertAtTail(val);
            return;
        }

        // Insert At Middle
        Node* n = new Node(val);
        Node* temp = head;

        for(int i = 1; i <= idx-1; i++) {
            temp = temp->next;
        }

        n->next = temp->next;
        temp->next = n;

        length++;
    }

    // Destructor: Free remaining nodes
    ~MyLinkedList() {
        Node* temp = head;

        while(temp != NULL) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = tail = NULL;
    }
};

int main() {

    MyLinkedList list;

    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);

    list.display();

    list.insertAtHead(67);
    list.display();

    list.removeAtHead();
    list.display();

    list.insert(2, 7);
    list.display();

    cout << "Size: " << list.size() << endl;

    cout << "Value at index 2: " << list.get(2) << endl;

    return 0;
}
