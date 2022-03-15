class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char> v(s.begin(), s.end());
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(v[i]=='(')
            {
                count++;
            }
            else if(v[i]==')')
            {
                if(count>0)
                {
                    count--;
                }
                else
                {
                    v[i]='.';
                }
            }
        }
        count=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(v[i]==')')
            {
                count++;   
            }
            else if(v[i]=='(')
            {
                if(count>0)
                {
                    count--;
                }
                else
                {
                    v[i]='.';
                }
            }
        }
        string ans="";
        for(auto i:v)
        {
            if(i!='.')
            {
                ans+=i;
            }
        }
        return ans;
    }
};