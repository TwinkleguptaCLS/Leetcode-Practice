// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int i=0;
    void tower(int N,int n, int a,int b,int c,vector<int>&ans)
    {
        if(N==0)
        {
            return;
        }
        tower(N-1,n,a,c,b,ans);
        i++;
            if(i==n)
            {
                ans.push_back(a);
                ans.push_back(b);
            }
        tower(N-1,n,c,b,a,ans);
    }
    vector<int> shiftPile(int N, int n){
        // code here
        vector<int>ans;
        tower(N,n,1,3,2,ans);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends