class Solution {
public:
    bool isPalim(string s,int l,int h)
    {
        while(l<h)
        {
            if(s[l]!=s[h])
            {
                return false;
            }
            else
            {
                l++;
                h--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l =0;
        int h = s.size()-1;
        while(l<h)
        {
            if(s[l]==s[h])
            {
                l++;
                h--;
            }
            else
            {
                return isPalim(s,l+1,h) || isPalim(s,l,h-1);
            }
        }
        return true;
    }
};