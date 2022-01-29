class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
         int m = mat.size();  //rows
          int n = mat[0].size(); //cols
        vector<vector<int>> ans(m);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum =0;
                int s_i = max(i-k,0);
                int e_i = min(i+k,m-1);
                int s_j = max(j-k,0);
                int e_j = min(j+k,n-1);
                for(int i2 = s_i;i2<=e_i;i2++)
                {
                    for(int j2= s_j;j2<=e_j;j2++)
                    {
                        sum+= mat[i2][j2];
                    }
                }
            ans[i].push_back(sum);

             }
        }
        return ans;
    }
};