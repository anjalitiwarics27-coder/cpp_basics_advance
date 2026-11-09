#include<iostream>
#include<string>
using namespace std;
class Node{
public:    
    int val;
    Node * next;
    Node (int val){
        this->val= val;
        this->next= NULL;
    }
};
void display(Node * head ){
    Node * temp = head ;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
void deletionAtBegin(Node* &head) {
    if(head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main (){
    Node* a = new Node(9);
    Node* b = new Node(8);
    Node* c = new Node(7);
    Node* d = new Node(6);
    Node* e = new Node(5);
    // attaching / connected 
    a->next= b;
    b->next= c;
    c->next= d;
    d->next = e ;
    cout<<"Before deletion : "<<endl;
    display(a);
    cout<<"After Delection : "<<endl;
    deletionAtBegin(a);
    display(a);
    
}