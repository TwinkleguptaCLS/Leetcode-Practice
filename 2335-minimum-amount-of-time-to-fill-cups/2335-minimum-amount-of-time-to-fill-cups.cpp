class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(),amount.end());
        if(amount[0]+amount[1]<amount[2])
        {
            return amount[2];
        }
        int sum=0;
        for(int i=0;i<amount.size();i++)
        {
            sum+=amount[i];
        }
        return (sum+1)/2;
    }
};