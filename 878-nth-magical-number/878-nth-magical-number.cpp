class Solution {
public:
    #define MOD 1000000007
    int nthMagicalNumber(int n, int a, int b) {
        
        int lcm=(a*b)/__gcd(a,b);
        
        long low=min(a,b);
        long high=(long)n*min(a,b);
        
        while(low<high)
        {
            long mid=low+(high-low)/2;
            
            if((mid/a+mid/b-mid/lcm)<n)
                low=mid+1;
            else
                high=mid;
        }
        return (int)(low%MOD);
    
    }
};