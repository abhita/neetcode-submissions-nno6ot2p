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
        int dia = 0;
    int getDepth(TreeNode* root, int& dia){
        
        if(root == nullptr){
            return 0;
        }
        int left= getDepth(root->left,dia);
        int right= getDepth(root->right,dia); 
        cout<<"left "<<left<<"right"<<right<<endl;
        dia = max(dia,left+right);
        return 1+max(left,right);
       // return 1+max(left,right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        getDepth(root,dia);
        return dia;

        
    }
};
