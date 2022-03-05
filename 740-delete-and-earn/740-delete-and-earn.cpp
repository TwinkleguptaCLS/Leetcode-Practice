class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>freq(10001);
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int exclude = 0;
        int include =0;
        
        for(int i=1;i<10001;i++)
        {
            int ni = exclude + freq[i]*i;
            exclude = max(include,exclude);
            
            include = ni;
        }
        
        return max(include,exclude);
            
        
            
            
    }
};