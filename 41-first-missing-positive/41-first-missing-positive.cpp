class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(auto i:nums)
        {
            mp[i] = true;
        }
        int i;
        for(i=1;i<=nums.size();i++)
        {
            if(mp[i]==false)
            {
                break;
            }
        }
        return i;
    }
};