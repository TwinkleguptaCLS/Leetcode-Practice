class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++)
        {
            if(hash[i]>1)
            {
                return i;
            }
        }
        return 0;
    }
};