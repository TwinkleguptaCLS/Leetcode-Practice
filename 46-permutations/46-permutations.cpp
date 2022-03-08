class Solution {
public:
    vector<vector<int>>ans;
    void rightrotate(vector<int>&nums,int i,int j)
    {
        int ch = nums[j];
        for(int k=j;k>i;k--)
        {
            nums[k] = nums[k-1];
        }
        nums[i] = ch;
    }
     void leftrotate(vector<int>&nums,int i,int j)
    {
        int ch = nums[i];
        for(int k=i;k<j;k++)
        {
            nums[k] = nums[k+1];
        }
        nums[j] = ch;
    }
    void allPermute(int i,int n,vector<int>&nums)
    {
        if(i==n-1)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++)
        {
            rightrotate(nums,i,j);
            allPermute(i+1,n,nums);
            leftrotate(nums,i,j);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        allPermute(0,n,nums);
        return ans;
    }
};