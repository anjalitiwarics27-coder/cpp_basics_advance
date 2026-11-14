/* Structure of circular linked list node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    void printList(Node* head) {
        // code here
        if(head == NULL) return ;
        Node * temp = head;
        while(true){
            cout<<temp->data<<" ";
            temp = temp->next;
            if(temp== head) break;
        }

    }
};