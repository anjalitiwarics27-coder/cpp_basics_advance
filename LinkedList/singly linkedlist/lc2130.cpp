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

    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* t1 = head;
        ListNode* t2 = reverse(slow->next);
        slow->next = NULL;

        int maxSum = 0;
        while (t2 != NULL) {
            maxSum = max(maxSum, t1->val + t2->val);
            t1 = t1->next;
            t2 = t2->next;
        }

        return maxSum;
    }
};