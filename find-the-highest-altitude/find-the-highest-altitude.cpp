class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = max(gain[0],0);
        for(int i=1;i<n;i++)
        {
            gain[i] += gain[i-1];
            maxi = max(maxi,gain[i]);
        }
        return maxi;
    }
};