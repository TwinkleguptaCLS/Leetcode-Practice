class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        vector<int>presum(nums.size());
        vector<int>suffixsum(nums.size());
        presum[0] = 0;
        suffixsum[nums.size()-1] = 0;
        for(int i=1;i<nums.size();i++)
        {
            presum[i] = presum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffixsum[i] = suffixsum[i+1] + nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(presum[i]==suffixsum[i])
            {
                return i;
            }
        }
        return ans;
    }
};