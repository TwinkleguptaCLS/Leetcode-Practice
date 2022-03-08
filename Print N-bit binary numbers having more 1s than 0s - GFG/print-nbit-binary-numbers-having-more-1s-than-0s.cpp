// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    vector<string>ans;
    void nbit(string &s,int zeros,int ones,int N)
    {
        if(N==0)
        {
            ans.push_back(s);
            return;
        }
        
            string op1 = s;
            op1+='1';
            nbit(op1,zeros,ones+1,N-1);
        
        if(ones>zeros)
        {
            string op = s;
            op+='0';
            nbit(op,zeros+1,ones,N-1);
        }
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string s="";
	    nbit(s,0,0,N);
	    return ans;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends