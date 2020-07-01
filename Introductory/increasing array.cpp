#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long 

int main()
{
	
	ll n;cin>>n;
ll x;
	ll mx=0,intial=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		mx=max(x,mx);
		intial+=mx-x;
	}
	
	

	

	cout<<intial<<endl;
	
	
}
