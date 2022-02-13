class Solution {
public:
    int mySqrt(int x) {
        int l = 1,h= x;
        while(l<=h)
        {
            long int mid = l+(h-l)/2;
            if(mid*mid ==x)
            {
                return mid;
            }
            else if(mid*mid > x)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return h;
        
    }
};