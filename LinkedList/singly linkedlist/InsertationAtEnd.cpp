#include<iostream>
#include<string>
using namespace std;
class Node{
public:    
    int val;
    Node* next;   
    Node(int val ){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node * head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void InsertAtEnd(Node* head , int val){
    Node * temp = head;
    if(temp==NULL) return; 
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node * newNode = new Node(val);
    temp->next= newNode;
    newNode=NULL;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d= new Node(4);
    Node*e= new Node(5);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next= e;
    cout<<"Before Insertation : "<<endl;
    display(a);
    cout<<"After Insertation : "<<endl;
    InsertAtEnd(a,9);
    display(a);
}