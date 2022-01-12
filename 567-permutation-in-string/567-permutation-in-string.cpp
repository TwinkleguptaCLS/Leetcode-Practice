class Solution {
public:
    bool checkAnagram(int freq1[],int freq2[])
    {
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!= freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
      int n = s1.size();
      int m = s2.size();
      if(n>m)
      {
          return false;
      }
      int freq1[30] ,freq2[30];
        for(int i=0;i<26;i++)
        {
            freq1[i] = freq2[i]=0;
        }
      for(int i=0;i<n;i++)
      {
          freq1[s1[i]-'a']++;
      }
      for(int i=0;i<n;i++)
      {
          freq2[s2[i]-'a']++;
      }
        if(checkAnagram(freq1,freq2)==true)
        {
            return true;
        }
      int window_size = n;
        while(window_size<m)
        {
            freq2[s2[window_size]-'a']++;
            freq2[s2[window_size -n] -'a']--;
            if(checkAnagram(freq1,freq2)==true)
            {
            return true;
            }
            window_size++;
        }
        return false;
    }
};