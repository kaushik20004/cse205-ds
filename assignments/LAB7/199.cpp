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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
    if (!root) return result;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while (!nodes.empty()) {
        int levelSize = nodes.size();

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = nodes.front();
            nodes.pop();

            if (i == levelSize - 1) {
                result.push_back(node->val);
            }

            if (node->left) nodes.push(node->left);
            if (node->right) nodes.push(node->right);
        }
    }

    return result;
    }
};