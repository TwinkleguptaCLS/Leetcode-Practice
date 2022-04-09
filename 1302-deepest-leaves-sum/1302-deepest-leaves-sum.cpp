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
    int sum=0;
    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return 1 + max(height(root->left),height(root->right));
    }
    void deepleafsum(TreeNode* root,int  maxlevel,int l)
    {
        
        if(!root) return;
        if(l==maxlevel)
        {
            sum+=root->val;
        }
        deepleafsum(root->left,maxlevel,l+1);
        deepleafsum(root->right,maxlevel,l+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        int maxlevel = height(root);
        deepleafsum(root,maxlevel,1);
        return sum;
    }
};