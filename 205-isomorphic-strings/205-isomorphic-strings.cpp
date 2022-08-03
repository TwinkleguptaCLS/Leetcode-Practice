class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int freq_s[257];
        int freq_t[257];
        for(int i=0;i<257;i++)
        {
            freq_s[i]=0;
            freq_t[i]=0;
        }
          for(int i=0;i<s.size();i++)
        {
            
            freq_s[s[i]]=i+1;
            freq_t[t[i]]=i+1;
            
        }
        for(int i=0;i<s.size();i++)
        {
          
            if(freq_s[s[i]]!=freq_t[t[i]])
            {
                return false;
            }
        }
        return true;
    }
};