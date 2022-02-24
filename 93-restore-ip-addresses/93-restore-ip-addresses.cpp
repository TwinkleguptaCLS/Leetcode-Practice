class Solution {
public:
    int n;
    vector<string>res;
    void generateIP(string &s, int idx, string str, int count)
    {
        if(count==4)
        {
            if(idx==n)
                res.push_back(str);
            return;
        }
        if(count>0)
        {
            str+='.';
        }
        int num=0;
        for(int i=idx;i<idx+3;i++)
        {
            str +=s[i];
            num = num*10+(s[i]-'0');
            if(num>255)
            {
                return;
            }
            generateIP(s,i+1,str,count+1);
            if(num==0) return;
        }
    }
    vector<string> restoreIpAddresses(string s) {
        n = s.size();
        if(n<4 || n>12)
        {
            return {};
        }
        generateIP(s,0,"",0);
        return res;
    }
};