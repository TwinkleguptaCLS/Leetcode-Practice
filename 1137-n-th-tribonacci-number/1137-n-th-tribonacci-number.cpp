class Solution {
public:
    int tribonacci(int n) {
        int t0=0;
        int t1=1;
        int t2=1;
        int curr=0;
        if(n<1)
        {
            return n;
        }
        if(n<3) return 1;
        for(int i=3;i<=n;i++)
        {
            curr = t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=curr;
        }
        return t2;
    }
};