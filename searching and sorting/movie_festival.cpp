#include <iostream>
#include<bits/stdc++.h>

#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
#define ll long long 
using namespace std;


int main()
{ 
vector<pair<ll,ll>> v;
ll n;cin>>n;
ll s,e;
ll ct=0,l=0;
while(n--)
{
	cin>>s>>e;	
	v.push_back({e,s});
}

sort(v.begin(),v.end());

for(ll i=0;i<v.size();i++)
{
	if(v[i].second>=l)
{
		ct++;
	l=v[i].first;
}
}
cout<<ct<<endl;
    return 0;
}
