class Solution {
public:
    int climbStairs(int n) {
        if(n<4) return n;
        int prev0=1;
        int prev1=1;
        int curr=0;
        for(int i=2;i<=n;i++)
        {
            curr =prev0+prev1;
            prev0=prev1;
            prev1=curr;
        }
        return prev1;
    }
};