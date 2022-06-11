#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int freq[61];
	    for(int i=0;i<61;i++)
	    {
	        freq[i]=0;
	    }
	    for(int i=0;i<n;i++)
	    {
	        freq[a[i]]++;
	    }
	    vector<pair<int,int>>v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({a[i],freq[a[i]]});
	    }
	    sort(v.begin(),v.end(),cmp);
	    for(int i=0;i<n;i++)
	    {
	        cout<<v[i].first<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}