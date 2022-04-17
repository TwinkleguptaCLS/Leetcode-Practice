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
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
      vector<int>ans;
        stack<pair<TreeNode*,int>>s;
        s.push({root,0});
        while(!s.empty())
        {
            pair<TreeNode*,int> p = s.top();
            s.pop();
            if(p.second==1)
            {
                ans.push_back(p.first->val);
            }
            else
            {
            s.push({p.first,1});
            if(p.first->right)
            {
                s.push({p.first->right,0});
            }
            
            if(p.first->left)
            {
                s.push({p.first->left,0});
            }
            }
        }
        return ans;   
    }
};