class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
         int start=0;
        int end=0;
        if(colors[0]!=colors[n-1])
        {
            return n-1;
        }
        else
        {
           
            for(int i=0;i<n;i++)
            {
                if(colors[i]!=colors[0])
                {
                    start =i;
                    end = max(end,n-start-1);
                }
            }
        }
        return max(start,end);
    }
};