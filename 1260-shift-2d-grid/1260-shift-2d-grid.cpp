class Solution {
public:
   
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        int temp1,temp2;
        while(k--)
        {
            temp1 = grid[n-1][m-1];
            for(int i=0;i<n;i++)
            {
                temp2 = grid[i][m-1];
                for(int j=m-1;j>0;j--)
                {
                    grid[i][j] = grid[i][j-1];
                }
                grid[i][0] = temp1;
                temp1 = temp2;
                
            }
        }
        return grid;
    }
};