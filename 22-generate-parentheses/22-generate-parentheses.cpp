class Solution {
public:
    vector<string>ans;
    void PP(int n,int l,int r,string temp)
    {
        if(temp.length()==2*n)
        {
            ans.push_back(temp);
            return;
        }
        if(l>r)
        {
            PP(n,l,r+1,temp+')');
        }
        if(l<n)
        {
            PP(n,l+1,r,temp+'(');
        }
    }
    vector<string> generateParenthesis(int n) {
        string temp="";
        PP(n,0,0,temp);
        return ans;
    }
};