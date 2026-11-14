class Solution {
  public:
    Node* deleteNode(Node* head, int key) {
        if (head == nullptr) {
            return nullptr;
        }

        // Case 1: Only one node in the circular linked list
        if (head->next == head) {
            if (head->data == key) {
                delete head;
                return nullptr;
            }
            return head;
        }

        // Case 2: The head node itself contains the key
        if (head->data == key) {
            // Find the last node to update its next pointer
            Node* last = head;
            while (last->next != head) {
                last = last->next;
            }
            
            Node* temp = head;
            last->next = head->next;
            head = head->next;
            delete temp;
            return head;
        }

        // Case 3: Deleting a non-head node (or key not found)
        Node* curr = head;
        while (curr->next != head && curr->next->data != key) {
            curr = curr->next;
        }

        // If the key was found, bypass and delete the node
        if (curr->next->data == key) {
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }

        return head;
    }
};