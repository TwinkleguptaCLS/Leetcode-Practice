class Solution {
public:
    int scoreOfParentheses(string s) {
        int count=0;
        stack<int>stk;
        for(int i=0;i<s.length();i++)
        {
            int val=0;
            if(s[i]=='(')
            {
                stk.push(0);
            }
            else
            {
                while(stk.top()!=0)
                {
                    val+=stk.top();
                    stk.pop();
                }
                val = max(2*val,1);
                stk.pop();
                stk.push(val);
            }
        }
        while(!stk.empty())
        {
            count+=stk.top();
            stk.pop();
        }
        return count;
    }
};