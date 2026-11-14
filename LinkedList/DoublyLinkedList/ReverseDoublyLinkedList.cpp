class Solution {
  public:
    Node *reverse(Node *head) {
        // Base case: if the list is empty or has only one node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        Node *curr = head;
        Node *temp = nullptr;

        // Traverse the list and swap next and prev pointers for each node
        while (curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            // Move to the next node in the original list (which is now stored in prev)
            curr = curr->prev;
        }

        // Before changing head, check for the cases like empty list and list with only one node.
        // After the loop, temp points to the second last node of the original list,
        // so temp->prev is the new head.
        if (temp != nullptr) {
            head = temp->prev;
        }

        return head;
    }
};