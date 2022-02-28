// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


long long getSum(int [],int n);
main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<getSum(a,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
long fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
long long getSum(int A[],int n)
{
    //Your code here
      long f= fact(n-1);
         long sum=0;
         for(int i=0;i<=n-1;i++)
         {
             sum+= A[i];
         }
         long sum2=0;
         for(int i=0;i<=n-1;i++)
         {
             sum2 += sum*f*pow(10,i);
         }
         return sum2%1000000007;
}

