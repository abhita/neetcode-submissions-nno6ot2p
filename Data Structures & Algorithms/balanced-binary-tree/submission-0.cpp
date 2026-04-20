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
    vector<int> getBalanced(TreeNode* root){
        if(root == nullptr) return {1,0};

        vector<int> leftAns = getBalanced(root->left);
        vector<int> rightAns = getBalanced(root->right);

        int balanced = (leftAns[0] && rightAns[0]) && ( abs(leftAns[1] - rightAns[1]) <= 1 ? 1 : 0);
        int balancedAns = 1 + max(leftAns[1],rightAns[1]);

        return {balanced,balancedAns};

    }
    bool isBalanced(TreeNode* root) {
        vector<int> ans = getBalanced(root);

        if(ans[0] == 0) return false;
        else return true;
        
    }
};
