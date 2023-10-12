class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr)
            return;
        if (node->next != nullptr) {
            ListNode* toDelete = node->next;
            node->val = toDelete->val;
            node->next = toDelete->next;
            delete toDelete;
        }
    }
};
