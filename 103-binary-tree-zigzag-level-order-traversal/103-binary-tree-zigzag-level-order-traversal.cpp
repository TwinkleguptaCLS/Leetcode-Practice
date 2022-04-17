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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        int flag =0;
        while(!q.empty())
        {
            vector<int>level;
            int cnt = q.size();
            while(cnt)
            {
                TreeNode* n = q.front();
                q.pop();
                level.push_back(n->val);
                if(n->left)
                    {
                        q.push(n->left);
                    }
                    if(n->right)
                    {
                        q.push(n->right);
                    }

                cnt--;

            }
            if(flag==0)
            {
            ans.push_back(level);
                flag=1;
            }
            else
            {
                reverse(level.begin(),level.end());
                ans.push_back(level);
                flag=0;
            }
            
        }
        return ans;
    }
    };