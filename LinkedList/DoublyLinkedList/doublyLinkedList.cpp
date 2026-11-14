
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class MyLinkedList {
private:
    Node* head;
    Node* tail;
    int length;

public:

    // Constructor
    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }

    // Display Forward
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Display Backward
    void displayReverse() {
        Node* temp = tail;

        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    // Insert At Head
    void insertAtHead(int val) {
        Node* n = new Node(val);

        if (head == NULL) {
            head = tail = n;
        }
        else {
            n->next = head;
            head->prev = n;
            head = n;
        }

        length++;
    }

    // Insert At Tail
    void insertAtTail(int val) {
        Node* n = new Node(val);

        if (head == NULL) {
            head = tail = n;
        }
        else {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }

        length++;
    }

    // Insert At Any Index
    void insert(int idx, int val) {

        if (idx < 0 || idx > length) {
            cout << "Invalid Index!" << endl;
            return;
        }

        if (idx == 0) {
            insertAtHead(val);
            return;
        }

        if (idx == length) {
            insertAtTail(val);
            return;
        }

        Node* n = new Node(val);
        Node* temp = head;

        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        n->next = temp->next;
        n->prev = temp;

        temp->next->prev = n;
        temp->next = n;

        length++;
    }

    // Delete At Head
    void deleteAtHead() {

        if (head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }

        Node* temp = head;

        if (head == tail) {
            head = tail = NULL;
        }
        else {
            head = head->next;
            head->prev = NULL;
        }

        delete temp;
        length--;
    }

    // Delete At Tail
    void deleteAtTail() {

        if (head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }

        Node* temp = tail;

        if (head == tail) {
            head = tail = NULL;
        }
        else {
            tail = tail->prev;
            tail->next = NULL;
        }

        delete temp;
        length--;
    }

    // Delete At Any Index
    void deleteAtIndex(int idx) {

        if (idx < 0 || idx >= length) {
            cout << "Invalid Index!" << endl;
            return;
        }

        if (idx == 0) {
            deleteAtHead();
            return;
        }

        if (idx == length - 1) {
            deleteAtTail();
            return;
        }

        Node* temp = head;

        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;

        delete temp;
        length--;
    }

    // Get Value At Index
    int get(int idx) {

        if (idx < 0 || idx >= length) {
            return -1;
        }

        Node* temp = head;

        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        return temp->val;
    }

    // Update Value At Index
    void set(int idx, int val) {

        if (idx < 0 || idx >= length) {
            cout << "Invalid Index!" << endl;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < idx; i++) {
            temp = temp->next;
        }

        temp->val = val;
    }

    // Search
    int search(int val) {

        Node* temp = head;
        int idx = 0;

        while (temp != NULL) {

            if (temp->val == val) {
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }

    // Size
    int size() {
        return length;
    }

    // Check Empty
    bool isEmpty() {
        return head == NULL;
    }

    // Destructor
    ~MyLinkedList() {
        Node* temp = head;

        while (temp != NULL) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = tail = NULL;
    }
};

int main() {

    MyLinkedList ll;

    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);

    cout << "Forward: ";
    ll.display();

    cout << "Backward: ";
    ll.displayReverse();

    ll.insert(2, 25);

    cout << "After Insertion: ";
    ll.display();

    ll.deleteAtHead();

    cout << "After Delete Head: ";
    ll.display();

    ll.deleteAtTail();

    cout << "After Delete Tail: ";
    ll.display();

    ll.deleteAtIndex(1);

    cout << "After Delete Index: ";
    ll.display();

    cout << "Value at index 1: " << ll.get(1) << endl;

    ll.set(1, 100);

    cout << "After Update: ";
    ll.display();

    cout << "Search 100: " << ll.search(100) << endl;

    cout << "Size: " << ll.size() << endl;

    cout << "Is Empty: " << ll.isEmpty() << endl;

    return 0;
}
