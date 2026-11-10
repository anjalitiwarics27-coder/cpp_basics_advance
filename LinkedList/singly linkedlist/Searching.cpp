#include<iostream>
using namespace std;
class Node {
public:    
    Node * next;
    int val ;
    Node (int val ){
        this->val =val;
        this->next= NULL;
    } 
};
void search(Node*head , int search ){
    Node* temp = head;
   while(temp!=NULL){
        if(temp->val == search ){
        cout<<"Present in this node ";
        return;
        }
        temp = temp->next;
    }
    cout<<"Not present";
}
int main(){
    Node * a = new Node(1);
    Node * b = new Node(2);
    Node * c = new Node(3);
    Node * d = new Node(4);
    Node * e = new Node(5);
    Node * f = new Node(6);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f; 
    search(a,3);
}