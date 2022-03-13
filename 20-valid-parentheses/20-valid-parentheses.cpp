class Solution {
public:
    bool isValid(string x) {
        stack<char>s;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            {
                s.push(x[i]);
            }
            else
            {
                if(s.empty())
                    return false;
                if(x[i]==')' && s.top()!='(')
                    return false;
                else if(x[i]=='}' && s.top()!='{')
                    return false;
                else if(x[i]==']' && s.top()!='[')
                    return false;
                s.pop();
            }
        }
        return s.empty();        
    }
};