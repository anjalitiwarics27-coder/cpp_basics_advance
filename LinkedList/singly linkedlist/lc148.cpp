/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode*b){
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        
        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                temp->next = a;
                a = a->next;
            } else {
                temp->next = b;
                b = b->next;
            }
            temp = temp->next;
        }
        
        if (a != NULL) temp->next = a;
        if (b != NULL) temp->next = b;
        
        ListNode* result = dummy->next;
        delete dummy; // Clean up allocated memory
        return result;

    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next ==NULL) return head ;
        // step1 : break the list into two halves 
        ListNode * slow = head;
        ListNode* fast = head;
        while(fast ->next != NULL && fast->next->next != NULL){
            slow =slow->next;
            fast = fast->next->next;
        }
        // at this point , slow is at left middle / middle 
        ListNode* head2 = slow->next;
        slow->next= NULL;
        head=sortList(head);
        head2= sortList(head2);
        return mergeTwoLists(head,head2);
    }
};