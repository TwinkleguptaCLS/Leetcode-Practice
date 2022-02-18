class Solution {
public:
    vector<vector<int>>ans;
    void pass(vector<int>&nums,int idx,vector<int>&temp,int sz)
    {
        if(idx == nums.size())
        {
            vector<int>res;
            for(int i=0;i<sz;i++)
            {
                res.push_back(temp[i]);
            }
            ans.push_back(res);
            return;
        }
        temp[sz] = nums[idx];
        pass(nums,idx+1,temp,sz+1);
        pass(nums,idx+1,temp,sz);
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp(nums.size(),0);
        pass(nums,0,temp,0);
        return ans;
    }
};