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
    int cnt=1;
    void goodNodeshelper(int node,TreeNode* root) // 3 , 1->root
    {
        if(!root)
        {
            return;
        }
        if(root->val>=node)  
        {
            cnt++;
        }
        node = max(node,root->val);
        goodNodeshelper(node,root->left);  
        goodNodeshelper(node,root->right);
        
    }
   
    int goodNodes(TreeNode* root) {
        if(root->left)
        {
            goodNodeshelper(root->val,root->left); //O(h)
        }
        if(root->right)
        {
            goodNodeshelper(root->val,root->right); //O(h)
        }
        
        return cnt;
    }
};