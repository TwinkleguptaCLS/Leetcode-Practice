class Solution {
public:
    vector<vector<int>>ans;
    void allPermute(int i,int n,vector<int>&nums)
    {
        if(i==n-1)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            allPermute(i+1,n,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        allPermute(0,n,nums);
        return ans;
    }
};