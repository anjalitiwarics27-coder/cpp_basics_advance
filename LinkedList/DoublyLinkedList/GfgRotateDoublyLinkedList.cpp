class Solution {
  public:
    Node *rotateDLL(Node *head, int k) {
        if (!head || k == 0) return head;

        Node *curr = head;
        int count = 1;

        // Traverse to the k-th node
        while (count < k && curr != nullptr) {
            curr = curr->next;
            count++;
        }

        // If k is equal to the size of the list, no rotation is needed
        if (!curr || !curr->next) return head;

        Node *kthNode = curr;

        // Traverse to the last node of the list
        while (curr->next != nullptr) {
            curr = curr->next;
        }

        // Connect the last node to the old head
        curr->next = head;
        head->prev = curr;

        // Update the new head to the (k+1)-th node
        head = kthNode->next;
        head->prev = nullptr;

        // Break the link after the k-th node
        kthNode->next = nullptr;

        return head;
    }
};