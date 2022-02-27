class Solution {
public:
    int minimumSum(int num) {
        vector<int>vp;
        vp.push_back(num%10);
        vp.push_back((num/10)%10);
        vp.push_back((num/100)%10);
        vp.push_back((num/1000)%10);
        
        sort(vp.begin(),vp.end());
        
        int x = vp[0]*10 + vp[3];
        int y = vp[1]*10 + vp[2];
        
        return x+y;
        
        
        
    }
};