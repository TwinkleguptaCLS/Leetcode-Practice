class Solution {
public:
    vector<vector<int>>ans;
    void allpermute(int i,vector<int>&nums)
    {
        if(i==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        unordered_map<int,int>freq;
        for(int j=i;j<nums.size();j++)
        {
            if(freq[nums[j]]==0)
            {
                swap(nums[j],nums[i]);
                allpermute(i+1,nums);
                swap(nums[j],nums[i]);
            }
            freq[nums[j]]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        allpermute(0,nums);
        return ans;
    }
};