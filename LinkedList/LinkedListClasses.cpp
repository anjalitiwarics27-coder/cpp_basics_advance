#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node*next;
    Node (int val){
        this->val = val;
        this->next=NULL;
    }
};
class MyLinkedList{
private:
    Node*head;
    Node*tail;
    int length;
public:
    MyLinkedList(){
        head = tail =NULL;
        length=0;
    }
    void display(){
        Node*temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
    void insertAtTail(int val){
        Node* n = new Node(val);
        if(length == 0 ) head = tail = n;
        else{
            tail->next=n;
            tail=n;
        }
        length++;
    }
    void insertAtHead(int val){
        Node * n = new Node(val);
        if(length==0) head=tail=n;
        else{
            n->next=head;
            head=n;
        }
        length++;
    }
    void removeAtHead(){
        if(length==0){
            cout<<"list is empty ";
            return ;
        }
        else{
            head =  head->next ;
            length--;
        }
    }
    int size(){
        return length;
    }
};
int main(){
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
}
