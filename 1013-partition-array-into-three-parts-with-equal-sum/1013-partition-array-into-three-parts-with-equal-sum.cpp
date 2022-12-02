class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = accumulate(arr.begin(),arr.end(),0);
        if(total%3!=0) return false;
        total = total/3;
        int sum=0,cnt=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+= arr[i];
            if(sum==total)
            {
                cnt++;
                sum=0;
            }
        }
        return cnt>=3;
    }
};