class Solution {
public:
    vector<int> countBits(int n) {
        int x=0;
        vector<int>ans;
        ans.push_back(0);
        if(n==0)
        {
            return ans;
        }
        ans.push_back(1);
        if(n==1)
        {
            return ans;
        }
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                x= ans[i/2];
            }
            else
            {
                x = ans[i-1]+1;  
            }
            ans.push_back(x);
        }
        return ans;
    }
};