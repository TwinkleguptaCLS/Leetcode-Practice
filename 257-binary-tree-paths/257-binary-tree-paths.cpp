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
    void helper(TreeNode* root, vector<string>&ans,string temp)
    {
        if(!root)
        {
            return;
        }
        if(root->left || root->right)
        {
            temp+=(to_string(root->val)+ "->");
        }
        else
        {
            temp+=to_string(root->val);
            ans.push_back(temp);
        }
        helper(root->left,ans,temp);
        helper(root->right,ans,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        helper(root,ans,"");
        return ans;
    }
};