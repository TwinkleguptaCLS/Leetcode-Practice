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
    int helper(TreeNode* root, int &ans)
    {
        if(!root) return 0;
        int s1 = max(0,helper(root->left,ans));
        int s2 = max(0,helper(root->right,ans));
        
        ans = max(ans,root->val+s1+s2);
        return root->val+ max(s1,s2);
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        if(!root->left && !root->right) 
            return root->val;
         helper(root,ans);
        return ans;
    }
};