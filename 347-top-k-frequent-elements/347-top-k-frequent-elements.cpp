class Solution {
public:
    static bool comp(pair<int,int>&a,pair<int,int>&b)
    {
        if(a.second>b.second)
        {
            return true;
        }
        return false;
    }
        
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        vector<pair<int,int>>vp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            vp.push_back({i.first,i.second});   
        }
        sort(vp.begin(),vp.end(),comp);
        for(auto i:vp)
        {
            ans.push_back(i.first);
            k--;
            if(k==0) break;
        }
        return ans;
        
    }
};