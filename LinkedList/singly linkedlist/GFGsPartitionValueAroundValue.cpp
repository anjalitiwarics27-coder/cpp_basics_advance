class Solution {
  public:
    Node* partition(Node* head, int x) {
        Node * dummy1 = new Node(-1);
                Node * dummy2 = new Node (-1);
                Node * dummy3 = new Node(-1);
                Node* temp= head;
                Node* temp1 = dummy1;
                Node* temp2 = dummy2;
                Node* temp3 = dummy3;
                while(temp!=nullptr){
                    if(temp->data<x){
                        temp1->next = temp;
                        temp1= temp;
                    }
                    else if (temp->data == x){
                        temp2->next = temp;
                        temp2 = temp;
                    }
                    else {
                        temp3->next = temp;
                        temp3 = temp;
                    }
                    temp= temp ->next;
                }
                temp3->next = nullptr;
                temp2->next = dummy3->next;
                temp1->next= dummy2->next;
                
                Node* newHead = dummy1->next;

                        // Clean up dummy nodes
                        delete dummy1;
                        delete dummy2;
                        delete dummy3;

                        return newHead;
    }
};