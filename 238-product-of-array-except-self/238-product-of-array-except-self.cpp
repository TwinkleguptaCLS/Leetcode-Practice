class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       //vector<int>prefixPro(nums.size());
        vector<int>suffixPro(nums.size());
        //prefixPro[0]=1;
        int prefixPro = 1;
       /* for(int i=1;i<nums.size();i++)
        {
            prefixPro[i] = prefixPro[i-1]*nums[i-1];
        }*/
        
        suffixPro[nums.size()-1] =1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            suffixPro[i] = nums[i+1]*suffixPro[i+1];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            suffixPro[i] = suffixPro[i]*prefixPro;
            prefixPro *= nums[i];
        }
        
        return suffixPro;
        
    }
};