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

    int calDepth(TreeNode* curr, int depth){

        if(curr == nullptr){
            return depth;
        }
        int leftVal= calDepth(curr->left, depth+1);
        int rightVal= calDepth(curr->right, depth+1);
        return max(leftVal, rightVal);
    }

    int maxDepth(TreeNode* root) {

        
        if(root == nullptr) return 0;

        return calDepth(root,0);
       
        
    }
};
