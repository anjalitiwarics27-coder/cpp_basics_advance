#include<iostream>
#include<string>
using namespace std;
class Node{
public:
   
    int val;
    Node *next;
    Node (int val){
        this->val=val;
        this->next=NULL;
     }
       
};
void display(Node* head ){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main(){
    Node * a= new Node(7);
    Node * b = new Node(0);
    Node * c = new Node(1);
    Node * d = new Node(8);
    Node * e = new Node(2);
    //linking the nodes together 
    a->next= b;
    b->next= c;
    c->next=d;
    d->next=e ;
    display(a);
}