class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]>=nums[i])
            {
                cnt = (nums[i-1]-nums[i])+1;
                ans+=cnt;
                nums[i] = nums[i]+cnt;
            }
        }
        return ans;
    }
};