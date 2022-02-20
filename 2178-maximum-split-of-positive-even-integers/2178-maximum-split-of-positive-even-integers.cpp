class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
      
        if(finalSum%2!=0)
        {
            return {};
        }
        vector<long long>ans;
        int i=2;
        while(i<=finalSum)
        {
            ans.push_back(i);
            finalSum-=i;
            i+=2;
        }
        ans[ans.size()-1] += finalSum;
        
        return ans;
        
    }
};