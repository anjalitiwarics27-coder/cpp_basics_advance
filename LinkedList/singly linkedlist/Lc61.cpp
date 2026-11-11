// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         if (head == nullptr || head->next == nullptr || k == 0) return head;

//         // 1. Length nikalna aur last node tak pohochna
//         int n = 1;
//         ListNode* temp = head;
//         while (temp->next != nullptr) {
//             n++;
//             temp = temp->next;
//         }

//         // 2. Circular Linked List bana dena (last ko head se connect)
//         temp->next = head;

//         // 3. Effective rotation handle karna
//         k = k % n;
//         int stepsToNewTail = n - k;

//         // 4. New tail tak pohoch ke link break karna
//         ListNode* newTail = head;
//         for (int i = 1; i < stepsToNewTail; i++) {
//             newTail = newTail->next;
//         }

//         ListNode* newHead = newTail->next;
//         newTail->next = nullptr; // List ko disconnect karna

//         return newHead;
//     }
// };




class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == NULL || head->next == NULL)
            return head;

        // Step 1: Calculate length
        int n = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            n++;
            temp = temp->next;
        }

        // Step 2: Optimize k
        k = k % n;

        if(k == 0) return head;

        // Step 3: Declare pointers
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;

        temp = head;

        // Step 4: Find required nodes
        for(int i = 1; i <= n; i++) {

            if(i == n-k)
                a = temp;

            if(i == n-k+1)
                b = temp;

            if(i == n)
                c = temp;

            temp = temp->next;
        }

        // Step 5: Change links
        a->next = NULL;
        c->next = head;

        return b;
    }
};
