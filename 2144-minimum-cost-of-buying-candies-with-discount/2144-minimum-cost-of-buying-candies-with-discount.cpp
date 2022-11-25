class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum=0;
        int cnt=0;
        for(int i=0;i<cost.size();i++)
        {
          
            if(cnt==2)
            {
                cnt=0;
                continue;
            }
            sum+=cost[i];
            cnt++;
            
        }
        return sum;
    }
};