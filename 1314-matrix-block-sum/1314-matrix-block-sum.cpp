class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
         int m = mat.size();  //rows
          int n = mat[0].size(); //cols
        vector<vector<int>> ans(m,vector<int> (n));
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                sum+=mat[i][j];
                mat[i][j] = sum;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum+=mat[j][i];
                mat[j][i] = sum;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int s_i = max(i-k,0);
                int e_i = min(i+k,m-1);
                int s_j = max(j-k,0);
                int e_j = min(j+k,n-1);
            
                ans[i][j] = mat[e_i][e_j];
                if(s_i -1>=0)
                {
                    ans[i][j] -= mat[s_i-1][e_j];
                }
                if(s_j -1>=0)
                {
                    ans[i][j] -= mat[e_i][s_j-1];
                }
                if(s_i-1>=0 && s_j-1>=0)
                {
                    ans[i][j] += mat[s_i-1][s_j-1];
                }
             }
        }
        return ans;
    }
};