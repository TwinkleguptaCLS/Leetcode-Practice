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
    vector<int>ans;
    unordered_map<int,int>mp;
    int max_freq=INT_MIN;
    int ffsum(TreeNode* root)
    {
        if(!root) return 0;
        int leftsum = ffsum(root->left);
        int rightsum = ffsum(root->right);
        int sum = root->val+leftsum+rightsum;
        if(mp.find(sum)==mp.end())
        {
            mp[sum] = 1;
        }
        else
        {
            mp[sum]++;
        }
        max_freq= max(max_freq,mp[sum]);
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        if(!root) return {};
        ffsum(root);
        for(auto i:mp)
        {
            if(i.second == max_freq)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};