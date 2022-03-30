class Solution {
public:
    bool searchMatrix(vector<vector<int>> &m, int t) {
        // pointless edge case we still have to consider
		if (!m.size() || !m[0].size()) return false;
     
		int row, l = 0, r = m.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            
            if (m[mid].back() < t) l = mid + 1;
         
            else if (m[mid][0] > t) r = mid - 1;
            // we found our row!
            else {
                l = mid;
                break;
            };
        }
        // storing the value of the new found row
        row = l;
        l = 0;
        r = m[0].size() - 1;
        while (l <= r) {
            mid = (l + r) / 2;
            
            if (m[row][mid] < t) l = mid + 1;
           
            else if (m[row][mid] > t) r = mid - 1;
           
            else return true;
        }
        return false;
    }
};