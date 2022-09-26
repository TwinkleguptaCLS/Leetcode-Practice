class Solution {
public:
    int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        int curr = 0;
        if(n<2)
        {
            return n;
        }
        for(int i=2;i<=n;i++)
        {
            curr = f0+f1;
            f0 = f1;
            f1=curr;
        }
        return f1;
    }
};