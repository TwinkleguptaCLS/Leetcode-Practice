class Solution {
public:
    set<vector<int>>ans;
    void allpermute(int i,vector<int>&nums)
    {
         if(i==nums.size()-1)
        {
            ans.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            allpermute(i+1,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        allpermute(0,nums);
        vector<vector<int>>res;
        for(auto i:ans)
        {
            res.push_back(i);
        }
        return res;
    }
};