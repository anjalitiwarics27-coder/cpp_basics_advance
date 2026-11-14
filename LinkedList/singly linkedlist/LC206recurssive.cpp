class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next ==NULL) return head;
        ListNode* a = head->next;
        ListNode* b = head->next;
        ListNode* newHead = reverseList(a);
        a->next = head;
        head->next=NULL;
        return newHead;
    }
};