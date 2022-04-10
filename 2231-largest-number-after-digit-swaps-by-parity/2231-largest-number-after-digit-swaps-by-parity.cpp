class Solution {
public:
    int largestInteger(int num) {
        vector<int> odd;
        vector<int> even;
        
        int temp = num;
        while(temp)
        {
            if((temp%10)%2==0)
            {
                even.push_back(temp%10);
            }
            else
            {
                odd.push_back(temp%10);
            }
            temp/=10;
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end(),greater<int>());
    
        //num = 1 2 3 4 
        //odd = 3 1
        //even = 4 2
        string n = to_string(num);
        int ans=0;
        int j = 0;
        int k =0;
        for(int i=0;i<n.size();i++)
        {
            int a = n[i]-'0';
            //cout<<a;
            if(a%2==0)
            {
                    ans = ans*10 + (even[j]);
                    j++;
            }
            else
            {
                    ans= ans*10 + (odd[k]);
                    k++;
            }
        }
        
        return ans;
    }
};