class Solution {
public:
    long long numberOfWays(string s) {
        vector<int>s1(s.size()); //0 after 1
        vector<int>s2(s.size()); //1 after 0
        vector<long long>sumofseq1(s.size()+1,0);
        vector<long long>sumofseq2(s.size()+1,0);
        long long ans =0;
        int one =0,zero=0;
        for(int i=s.size()-1;i>=0;i--) //"001101" s1 = 333211  s2 = 321110  sos =10
        {
            if(s[i]=='1')
            {
                one++; 
            }
            else
            {
                zero++;
            }
            s1[i] += one;
            s2[i] += zero;
            if(s[i]=='0')  // 001101   s1 =  333211  sos = 1110
            {
                sumofseq1[i] += s1[i]+sumofseq1[i+1];
                sumofseq2[i] += sumofseq2[i+1];
            }
            else
            {
                sumofseq1[i] += sumofseq1[i+1];
                sumofseq2[i] += s2[i]+sumofseq2[i+1];
            }
        }

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                ans+= sumofseq2[i+1];
            }
            else
            {
                ans+= sumofseq1[i+1];
            }
        }
        return ans;
    }
};