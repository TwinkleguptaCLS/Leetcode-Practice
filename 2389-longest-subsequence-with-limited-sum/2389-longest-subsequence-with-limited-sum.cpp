class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++)
        {
            int sum=0;
            int cnt=0;
            for(int j=0;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum<=queries[i])
                {
                    cnt++;
                }
               
            }
             ans.push_back(cnt);
        }
            
        return ans;
    }
};