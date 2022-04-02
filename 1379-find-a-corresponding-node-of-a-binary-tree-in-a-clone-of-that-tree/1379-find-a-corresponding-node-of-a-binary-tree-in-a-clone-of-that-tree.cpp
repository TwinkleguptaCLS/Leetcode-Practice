/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       TreeNode* ans=NULL;
        if(!original)
        {
            return NULL;
        }
        if(target->val == cloned->val)
        {
            return cloned;
        }
        if(original)
        {
            if(!ans)
            {
            ans = getTargetCopy(original->left,cloned->left,target); // NULL 
            }
            if(!ans)
            {
             ans = getTargetCopy(original->right,cloned->right,target); // 5 
            }
        } 
        return ans;
    }
};