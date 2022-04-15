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
        int s1 = helper(root->left,ans);
        int s2 = helper(root->right,ans);
        
        ans = max(ans,root->val+max(s1,0)+max(s2,0));
        return root->val+ max({s1,s2,0});
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        if(!root->left && !root->right) 
            return root->val;
         helper(root,ans);
        return ans;
    }
};