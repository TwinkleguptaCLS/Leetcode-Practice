class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto i:nums)
        {
            if(ele1==i)
            {
                cnt1++;
            }
            else if(ele2==i)
            {
                cnt2++;
            }
            else if(cnt1==0)
            {
                ele1 = i;
                cnt1=1;
            }
            else if(cnt2==0)
            {
                ele2 = i;
                cnt2=1;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 =0 ; cnt2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele1)
            {
                cnt1++;
            }
            if(nums[i]==ele2)
            {
                cnt2++;
            }
        }
        int n = nums.size();
        if(cnt1 > floor(n/3) && cnt2 > floor(n/3))
        {
            return {ele1,ele2};
        }
        else if(cnt1 > floor(n/3))
        {
            return {ele1};
        }
        else if(cnt2 > floor(n/3))
        {
            return {ele2};
        }
        else
        {
            return {};
        }
    }
};