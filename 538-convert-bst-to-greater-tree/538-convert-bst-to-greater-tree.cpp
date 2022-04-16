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
   
    int sum = 0;
    void globalSum(TreeNode* root)
    {
        if(!root) return ;
        sum+=root->val;
        globalSum(root->left);
        globalSum(root->right);
    }

    TreeNode* helper(TreeNode* root,int &s1)
    {
        if(!root) return NULL;
        helper(root->left,s1);// NULL
        s1=s1+(root->val);
        root->val = (sum-s1+root->val);
        cout<<root->val<<" , ";
        helper(root->right,s1);
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        if(!root) return NULL;
        globalSum(root);
        int s1 = 0;
        return helper(root,s1);   
        
    }
};