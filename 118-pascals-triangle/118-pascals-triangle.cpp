class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        res.push_back({1});
        if(numRows==1)
        {
            return res;
        }
        res.push_back({1,1});
        for(int i=2;i<numRows;i++)
        {
            vector<int>temp;
            temp.push_back(1);
            res.push_back(temp);
            for(int j=1;j<i;j++)
            {
                res[i].push_back(res[i-1][j-1] + res[i-1][j]);
            }
            res[i].push_back(1);
        }
        return res;
    }
};