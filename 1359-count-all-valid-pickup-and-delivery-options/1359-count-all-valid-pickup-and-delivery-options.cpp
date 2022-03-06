class Solution {
public:
    int countOrders(int n) {
        long long int ans=1;
        for(int i=1;i<=n;i++)
        {
            ans=(ans*(2*i-1)*i)%1000000007;
        }
        return ans;
    }
};