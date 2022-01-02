class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n = height.size();
        vector<int>pmax;
        vector<int>smax;
        pmax.resize(n);
        smax.resize(n);
        pmax[0] = height[0];
        smax[n-1] = height[n-1];
        for(int i=1;i<n;i++)
        {
            pmax[i]= max(pmax[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            smax[i]= max(smax[i+1],height[i]);
        }
        int h = 0;
        for(int i=1;i<n-1;i++)
        {
            h = min(pmax[i],smax[i]);
            if(h>height[i])
            {
                ans+= (h-height[i]);
            }
        }
        return ans;
        
    }
};