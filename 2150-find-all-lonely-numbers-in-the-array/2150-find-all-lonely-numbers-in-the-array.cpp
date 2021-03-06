class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        //sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==1 && mp[nums[i]-1]==0 && mp[nums[i]+1]==0 )
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};