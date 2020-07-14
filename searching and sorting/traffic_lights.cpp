#include <iostream>
#include<bits/stdc++.h>

#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
#define ll long long 
using namespace std;

const int mx=2e5;
int x,n,p[mx];
map<int,int>mp;
int main()
{ 

cin>>x>>n;
set<int>s;
s.insert(0);
s.insert(x);

mp[x]=1;

for(int i=0;i<n;i++)
{
	cin>>p[i];
	auto it=s.lower_bound(p[i]);
	int r=*it;
	--it;
	int l=*it;
	--mp[r-l];
	if(!mp[r-l])
	mp.erase(r-l);
	
	s.insert(p[i]);
	++mp[r-p[i]];
	++mp[p[i]-l];
	cout<<((--mp.end())->first)<< " ";
	
	
}


 return 0;
 
 }
