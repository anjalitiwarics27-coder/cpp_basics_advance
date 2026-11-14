class Solution {
  public:
    bool isCircular(Node *head) {
        if (head == nullptr) return true;

        Node* curr = head->next;
        while (curr != nullptr && curr != head) {
            curr = curr->next;
        }

        return (curr == head);
    }
};