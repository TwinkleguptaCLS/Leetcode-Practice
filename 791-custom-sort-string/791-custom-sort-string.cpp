class Solution {

public:

static bool compare(pair<char,int>&a,pair<char,int>&b)

{


if(a.second<b.second)

{

return true;

}

return false;

}

string customSortString(string order, string s) {

int rank[26];

for(int i=0;i<26;i++)

{

rank[i]=201;

}
for(int i=0;i<order.length();i++)

{

rank[order[i]-'a']=i;

}

vector<pair<char,int>>Order;

for(int i=0;i<s.length();i++)

{

Order.push_back({s[i],rank[s[i]-'a']});

}

sort(Order.begin(),Order.end(),compare);

for(int i=0;i<Order.size();i++)
{

s[i]=Order[i].first;

}

return s; 

}

};