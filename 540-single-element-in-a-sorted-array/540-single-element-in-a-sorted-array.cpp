class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        if(n<2)
        {
            return nums[0];
        }
        int l=0; int h = n;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(mid==0)
            {
                if(nums[mid]!=nums[mid+1])
                {
                    return nums[mid];
                }
                else
                    l = mid+1;
            }
            else if(mid==n)
            {
                if(nums[mid]!=nums[mid-1])
                {
                    return nums[mid];
                }
                else
                    h = mid-1;

            }
            else if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])
            {
                return nums[mid];
                
            }
            else
            {
                int fo,so;
                if(nums[mid]==nums[mid+1])
                {
                    fo = mid; so = mid+1;
                }
                else
                {
                    fo = mid-1; so = mid;
                }
                if(fo%2==0)
                {
                    l= mid+1;
                }
                else
                {
                    h = mid-1;
                }
            }
        }
     return -1;
        
    }
};