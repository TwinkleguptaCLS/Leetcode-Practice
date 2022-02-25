class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1 || n==2)
        {
            return 1;
        }
        int a[n+1];
        a[0] = 0;
        a[1] = 1;
        int max_ele = max(a[0],a[1]);
        for(int i=1;i<(n%2==0 ? n/2 : n/2+1);i++)
        {
            int j= 2*i;
            a[j] = a[i];
            max_ele = max(max_ele,a[j]);
            a[j+1] = a[i]+ a[i+1];
            max_ele = max(max_ele,a[j+1]);
        }     
        return max_ele;
    }
};