#include<iostream>
#include<string>
using namespace std;
class Node{
public:     
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtPosition(Node* &head, int pos, int val){
   if (pos == 0){
      Node * newNode = new Node(val);
      newNode->next = head;
      head = newNode;
      return;
   }
   
   Node * temp = head;
   for(int i = 0; i < pos - 1; i++){
      if(temp == NULL){
        cout << "Invalid Position! " << endl;
        return;
      }
      temp = temp->next;
   }
   
   if(temp != NULL){       // main code 
     Node * newNode = new Node(val);
     newNode->next = temp->next;
     temp->next = newNode;
   }
   else{
    cout << "Position out of bounds ! " << endl;
   }
}

int main(){
    Node * a = new Node(9); // head 
    Node * b = new Node(1);
    Node * c = new Node(8);
    Node * d = new Node(4);
    Node * e = new Node(2);
    
    // लिंक्ड लिस्ट जोड़ना
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    cout << "Before insertion: " << endl;
    display(a); // हेड (a) पास करें
    
    // 3. सही तरीके से कॉल करें: (head, position, value)
    // यहाँ पोजीशन 3 पर वैल्यू 20 जोड़ी जा रही है
    insertAtPosition(a, 3, 20);
    
    cout << "After Insertion: " << endl;
    display(a); // हेड (a) पास करें

    return 0;
}