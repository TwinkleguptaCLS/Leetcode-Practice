class Solution {
public:
    int arrayNesting(vector<int>& a) {
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>=0)
            {
            int ind =i,temp_c=0;
            
            while(a[ind]>=0)
            {
              int temp = a[ind];
              a[ind] = -1;
                ind = temp;
                temp_c++;
            }
            
             count = max(temp_c,count);
            }
            
            
        }
        return count;
    }
};