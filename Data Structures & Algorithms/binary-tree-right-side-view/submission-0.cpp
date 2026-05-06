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

        queue<TreeNode*> q;
        vector<int> ans;

        if(root==nullptr){
            return ans;
        }
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            TreeNode* curr;
            while(size>0){
                curr = q.front();
                q.pop();
                if(size == 1) {ans.push_back(curr->val);}
                if(curr->left){ q.push(curr->left);}
                if(curr->right) {q.push(curr->right);}
                size--;
            }
             
        }
        return ans;
        
    }
};
