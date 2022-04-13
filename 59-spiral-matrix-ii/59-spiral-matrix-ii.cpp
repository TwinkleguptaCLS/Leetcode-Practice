class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n , vector<int> (n, 0));
        int minr=0;
        int maxr=n;
        int minc=0;
        int maxc=n;
        int cnt=1;
        int te = n*n;
        while(cnt<=te)
        {
            for(int i=minc;i<maxc && cnt<=te ;i++)
            {
                ans[minr][i] = cnt;
                cnt++;
            }
            minr++;
            
            for(int i=minr;i<maxr && cnt<=te;i++)
            {
                ans[i][maxc-1] = cnt;
                cnt++;
            }
            maxc--;
            for(int i=maxc-1;i>=minc && cnt<=te;i--)
            {
                ans[maxr-1][i] = cnt;
                cnt++;
            }
            maxr--;
            for(int i=maxr-1;i>=minr && cnt<=te;i--)
            {
                ans[i][minc]= cnt;
                cnt++;
            }
            minc++;
            
            
        }
        return ans;
    }
};