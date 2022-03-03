class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int count = 0;
        int ans=0;
        int n = nums.size();
        if(nums.size()<3)
        {
            return 0;
        }

        for(int i=0;i<=nums.size()-3;i++)
        {
            int diff = nums[i+1]-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                if(diff == nums[j]-nums[j-1]){
                    count++;
                }
                if(diff != nums[j]-nums[j-1]){
                    count=0;
                    break;
                }
                if(count>=2)
                {
                    ans++;
                }
                
            }
            count=0;
        }
          
        return ans;
    }
};