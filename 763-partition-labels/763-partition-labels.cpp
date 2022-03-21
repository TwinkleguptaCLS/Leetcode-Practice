class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last_idx(26,0);
        
        for(int i=0;i<s.length();++i)
        {
            last_idx[s[i]-'a'] = i;
        }
        vector<int>ans;
        int start = 0; int end = 0;
        for(int i=0;i<s.length();++i)
        {
            end = max(end,last_idx[s[i]-'a']);
            if(i==end)
            {
                ans.push_back(i-start+1);
                start = i+1;
            }
        }
        return ans;
    }
};