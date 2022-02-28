class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || (x!=0 && x%10==0)) return false;
        int rev=0;
        int last=0;
        while(x>rev)
        {
            last = x%10;
            rev = rev*10+last;
            x/=10;
        }
        if(x == rev || rev/10 == x)
        {
            return true;
        }
        return false;
        
    }
};