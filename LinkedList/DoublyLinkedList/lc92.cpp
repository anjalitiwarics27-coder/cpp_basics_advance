class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0, head);
        ListNode* prev = &dummy;

        // 1. Move `prev` to the node right before `left` (1-indexed)
        for (int i = 0; i < left - 1; ++i) {
            prev = prev->next;
        }

        // 2. Reverse the sublist in-place by repeatedly moving `then` right after `prev`
        ListNode* curr = prev->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* then = curr->next;
            curr->next = then->next;
            then->next = prev->next;
            prev->next = then;
        }

        return dummy.next;
    }
};