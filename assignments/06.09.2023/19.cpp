class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if (head == NULL || n <= 0) {
            return head;
        }
        ListNode dummy=NULL;
        dummy.next = head;
        ListNode* first = &dummy;
        ListNode* second = &dummy;
        for (int i = 0; i <= n; i++) {
            if (first == NULL) {
                return head; 
            }
            first = first->next;
        }
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }
        ListNode* toRemove = second->next;
        second->next = toRemove->next;
        delete toRemove;
        return dummy.next;
    }
};