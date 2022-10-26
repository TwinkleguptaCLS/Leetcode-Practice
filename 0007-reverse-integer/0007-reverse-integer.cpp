class Solution {
public:
    int reverse(int x) {
        long long int num=0;
        long long int temp = abs(x);
        while(temp!=0)
        {
            long long int digit = temp%10;
            num = num*10+digit;
            temp=temp/10;
        }
        if(num> -pow(2,31) && num< pow(2,31)-1)
        {
            if(x<0)
            {
                return -num;
            }
            else
            {
                return num;
            }
        }
        return 0;
    }
};