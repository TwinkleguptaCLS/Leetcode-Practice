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
    void inorder(TreeNode* root,vector<int>&ans)
    {
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return NULL;
        vector<int>ans;
        inorder(root,ans);
        TreeNode* temp = new TreeNode(-1);
        TreeNode* temp2 = temp;
        for(int i=0;i<ans.size();i++)
        {
            temp2->right = new TreeNode(ans[i]);
            temp2 = temp2->right;
        }
        return temp->right;
    }
};