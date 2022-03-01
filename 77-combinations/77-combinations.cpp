class Solution {
public:
    vector<vector<int>>ans; 
    void lexiSS(vector<int>&temp,int k,int sz,int n,int i)
    {
        if(sz==k)
        {
            vector<int>res;
            for(int j=0;j<sz;j++)
            {
                res.push_back(temp[j]);
            }
            ans.push_back(res);
            return;
        }
        if(i>n) return;
        temp[sz] = i;
        lexiSS(temp,k,sz+1,n,i+1);
        lexiSS(temp,k,sz,n,i+1);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp(n);
       
        lexiSS(temp,k,0,n,1);
        return ans;
    }
};