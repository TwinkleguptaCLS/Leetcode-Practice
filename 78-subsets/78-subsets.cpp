class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> AllSubsets;
        int n = nums.size();
        int mask = 1<<n;
        for(int i=0;i<mask;i++)
        {
            vector<int>subset;
            for(int j=0;j<n;j++)
            {
                if((i & (1<<j))!=0)
                {
                    subset.push_back(nums[j]);
                }
            }
            AllSubsets.push_back(subset);
        }
        return AllSubsets;
    }
};