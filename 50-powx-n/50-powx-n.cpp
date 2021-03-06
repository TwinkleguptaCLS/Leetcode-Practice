class Solution {
public:
    double mydoublePow(double x,int n)
    {
        if(n==0)
        {
            return 1;
        }
        double ans = myPow(x,n/2);
        if(n%2==0)
        {
            return ans*ans;
        }
        return ans*ans*x;
    }
    
    double myPow(double x, int n) {
        if(n<0)
        {
            return 1/mydoublePow(x,abs(n));
        }
        return mydoublePow(x,n);
    }
};