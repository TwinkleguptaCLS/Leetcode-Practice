class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(),nums.end());
        int i=0;
        while(nums[i]<0 && k && i<nums.size())
        {
            nums[i] = -nums[i];
            i++;
            k--;
        }
        sort(nums.begin(),nums.end());
        if(k%2){
            nums[0] = -nums[0];
        }
         
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        return sum;
    }
};