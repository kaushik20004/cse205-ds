/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> idxMap;
        for (int i = 0; i < inorder.size(); ++i) {
            idxMap[inorder[i]] = i;
        }
        return buildTreeHelper(preorder, inorder, 0, 0, inorder.size() - 1, idxMap);
    }
    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int preStart, int inStart, int inEnd, unordered_map<int, int>& idxMap) {
        if (preStart >= preorder.size() || inStart > inEnd) return nullptr;
        TreeNode* root = new TreeNode(preorder[preStart]);
        int inIndex = idxMap[root->val];
        root->left = buildTreeHelper(preorder, inorder, preStart + 1, inStart, inIndex - 1, idxMap);
        root->right = buildTreeHelper(preorder, inorder, preStart + (inIndex - inStart) + 1, inIndex + 1, inEnd, idxMap);
        return root;
    }
    void inorderTraversal(TreeNode* root) {
        if (!root) return;
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
};