class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        int n = nums.size();
        int i=0; int j = nums.size()-1;
        while(i<=j)
        {
            if(nums[i]*nums[i]>nums[j]*nums[j])
            {
                res[n-1] = nums[i]*nums[i];
                i++;
            }
            else
            {
                res[n-1] = nums[j]*nums[j];
                j--;
            }
            n--;
        }
        return res;
    }
};