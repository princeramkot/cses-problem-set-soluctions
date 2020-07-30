#include <iostream>
#include<bits/stdc++.h>

#define ll long long
using namespace std;
const  int mx=2e5;
int main() {
	ll n,t;
	cin>>n>>t;
	ll arr[mx];
	
	for(ll i=0;i<n;i++)
	cin>>arr[i];
	
ll lb=1,rb=1e18;
while(lb<rb)
{
	ll mb=(lb+rb)/2,s=0;
	for(int i=0;i<n;++i)
	s+=min(mb/arr[i],(ll)1e9);
	
	if(s>=t)
	rb=mb;
	else
	lb=mb+1;
	
}
cout<<lb;
	return 0;
}
