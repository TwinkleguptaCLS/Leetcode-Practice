class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long int rev=0;
        int last=0;
        while(x>0)
        {
            last = x%10;
            rev = rev*10+last;
            x/=10;
        }
        if(num == rev)
        {
            return true;
        }
        return false;
        
    }
};