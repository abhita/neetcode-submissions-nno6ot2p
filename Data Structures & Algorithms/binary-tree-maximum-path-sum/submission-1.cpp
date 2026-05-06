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
    int maxSum = INT_MIN;
    int maxPath(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        maxSum = max(maxSum,root->val);
        int left = maxPath(root->left);
        int leftMax = max(0,left);
        int right = maxPath(root->right);
        int rightMax = max(0,right);

        maxSum = max(maxSum,leftMax+rightMax+root->val);
        return max(leftMax,rightMax)+root->val;
    }
    
    int maxPathSum(TreeNode* root) {
       // maxSum = root->val;
        maxPath(root);
        return maxSum;

        
    }
};
