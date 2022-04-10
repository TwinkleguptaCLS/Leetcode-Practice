class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>nums;
        for(string i: ops)
        {
            if(i=="C")
            {
                nums.pop_back();
            }
            else if(i=="D")
            {
                int a = nums.back();
                nums.push_back(a*2);
            }
            else if(i== "+")
            {
                int a = nums[nums.size()-1];
                int b = nums[nums.size()-2];
                nums.push_back(a+b);
            }
            else
            {
                nums.push_back(stoi(i));
            }
        }
        int sum=0;
        for(auto i:nums)
        {
            sum+=i;
        }
        return sum;
    }
};