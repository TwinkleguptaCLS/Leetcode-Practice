// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
long long countPaths(int i,int j,int m,int n)
{
    if(i==m-1 || j == n-1)
    {
        return 1;
    }
    
    long long ans = countPaths(i+1,j,m,n) + countPaths(i,j+1,m,n);
    return ans;
}
long long  numberOfPaths(int m, int n)
{
   long long ans = countPaths(0,0,m,n);
   return ans;
}

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>m>>n;
	    cout << numberOfPaths(m, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends