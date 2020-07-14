#include <iostream>
#include<bits/stdc++.h>

#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
#define ll long long 
using namespace std;

const int mx=2e5;
int main()
{ 
int n;cin>>n;
vector<pair<ll,ll>> arr;

ll input,ct=0;
for(int i=0;i<n;i++)
{
cin>>input;
arr.push_back({input,i});
}
sort(arr.begin(),arr.end());

ll ptr=arr.size()-1;


pair<ll,ll> curr;
while(!arr.empty())
{ 
	ll pt=ptr-1;
	curr.first=arr[ptr].first;
	curr.second=arr[ptr].second;
	while(pt>=0)
	{	
		if(curr.first>=arr[pt].first && curr.second<arr[pt].second)
		{
			curr.first=arr[pt].first;
			curr.second=arr[pt].second;
		arr.erase(arr.begin()+pt); ptr--;
		
		}pt--;
	}
	arr.erase(arr.begin()+ptr);
	ptr--;
	ct++;
}
   
   cout<<ct<<endl;
   return 0;
}

