class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        vector<int> perm(n+1);
        int cnt1 = 0; int cnt2 = n;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                perm[i] = cnt1;
                cnt1++;
            }
            if(s[i]=='D')
            {
                perm[i]=cnt2;
                cnt2--;
            }
        }
        if(s[n-1]=='D')
        {
            perm[n] = cnt2; 
        }else
        {
            perm[n] = cnt1;
        }
        return perm;
;    }
};