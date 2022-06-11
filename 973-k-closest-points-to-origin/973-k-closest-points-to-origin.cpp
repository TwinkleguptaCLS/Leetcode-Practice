 bool cmp(vector<int>&v1,vector<int>&v2)
    {
        int d1 = v1[0] * v1[0] + v1[1]*v1[1];
        int d2 = v2[0]*v2[0] + v2[1]*v2[1];
        return d1<d2;
    }
class Solution {
public:
   
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),cmp);
        vector<vector<int>>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(points[i]);
        }
        return ans;
    }
};