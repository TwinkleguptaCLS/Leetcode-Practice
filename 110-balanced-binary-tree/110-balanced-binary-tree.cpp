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
   
    int height(TreeNode* root,bool &flag)
    {
        if(!root) return 0;
        
        int h1 = height(root->left,flag);
        int h2 = height(root->right,flag);
        if(abs(h1-h2)>1) 
        {
            flag = false;
        }
            return 1+ max(h1,h2);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        bool flag = true;
        height(root,flag);
        
       return flag;
    }
};