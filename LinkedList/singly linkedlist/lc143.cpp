class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr != NULL) {
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        b = reverse(b);

        // Merge a and b alternately
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* temp1 = a;
        ListNode* temp2 = b;

        while (temp1) {
            temp->next = temp1;
            temp = temp->next;
            temp1 = temp1->next;

            if (temp2) {
                temp->next = temp2;
                temp = temp->next;
                temp2 = temp2->next;
            }
        }

        head = dummy->next;
    }
};