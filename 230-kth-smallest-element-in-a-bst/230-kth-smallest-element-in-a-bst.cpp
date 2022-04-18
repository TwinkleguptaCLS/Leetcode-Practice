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
    int cnt =0;
    void lefttree(TreeNode* root,int &ans,int k)
    {
        if(!root) return;
        
        lefttree(root->left,ans,k);
        cnt++;
        if(cnt==k)
        {
            ans = root->val;
        }
        lefttree(root->right,ans,k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return -1;
        int ans=0;
       
        lefttree(root,ans,k);
         
        return ans;
    }
};