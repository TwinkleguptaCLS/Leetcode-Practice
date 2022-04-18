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
    void lefttree(TreeNode* root,vector<int>&ans)
    {
        if(!root) return;
        
        lefttree(root->left,ans);
        ans.push_back(root->val);
        lefttree(root->right,ans);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root) return -1;
        vector<int>ans;
       
        lefttree(root,ans);
         for(int i:ans)
            cout<<i;
        return ans[k-1];
    }
};