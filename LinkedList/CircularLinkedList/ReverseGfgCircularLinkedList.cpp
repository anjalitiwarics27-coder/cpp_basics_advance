class Solution {
  public:
    Node* reverseCircular(Node* head) {
        // code here
        if (!head || head->next == head) {
                    return head;
                }

                Node* prev = nullptr;
                Node* curr = head;
                Node* nextNode = nullptr;

                do {
                    nextNode = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = nextNode;
                } while (curr != head);

                // Connect the original head (now the tail) to the new head (prev)
                head->next = prev;

                return prev;
        
    }
};