#include<iostream>
#include<string>
using namespace std;
class Node{
public:    
    int val;
    Node * next;
    Node (int val ){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node*head){
    Node * temp  = head ;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtBegin(Node* & head  ,int val  ){
    Node * newNode = new Node(val);
    newNode->next= head;
    head = newNode;
}

int main(){
    Node * a = new Node (7); //head
    Node *b = new Node(0);
    Node *c = new Node(1);
    Node *d = new Node(8);
    Node *e = new Node(2);
    // attching the node 
    a->next= b ;
    b->next= c;
    c->next= d;
    d->next= e;
    display(a);
    insertAtBegin(a,2);
    cout<<endl;
    display(a);

}