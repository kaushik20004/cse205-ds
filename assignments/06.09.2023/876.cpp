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
    ListNode* middleNode(ListNode* head) {
        ListNode* prevptr = head;
        ListNode* currptr = head;
        ListNode* nextptr=nullptr;
        while(currptr!=NULL && currptr->next != NULL){
            prevptr=prevptr->next;
            currptr=currptr->next->next;
        }
        return prevptr;
    }
};