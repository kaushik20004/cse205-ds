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
    int length(TreeNode* root) {
        if (root == NULL) {
        return 0; 
    } 
    int left = length(root->left);
    int right = length(root->right);
    int ans = max(left, right) + 1;
    return ans;
    }
    bool isBalanced(TreeNode* root) {
          if (root == NULL) {
        return true;  
    }
    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    if (abs((length(root->left)-length(root->right)) <=1 && isBalanced(root->left) && isBalanced(root->right))){
        return true;
    }
    return false;
    }
};