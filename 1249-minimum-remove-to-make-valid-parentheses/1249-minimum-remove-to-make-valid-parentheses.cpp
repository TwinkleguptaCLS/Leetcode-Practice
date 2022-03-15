class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                stk.push(i);
            }
            else if(s[i]==')')
            {
                if(!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    s[i] = '.';
                }
            }
        }
        while(!stk.empty())
        {
            s[stk.top()] = '.';
            stk.pop();
        }
        string ans="";
        for(auto i:s)
        {
            if(i!='.')
            {
                ans+=i;
            }
        }
        return ans;
    }
};