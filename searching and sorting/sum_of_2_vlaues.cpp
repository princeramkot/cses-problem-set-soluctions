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
ll n,x;
int flag=0;
cin>>n>>x;
vector<pair<ll,ll>>arr;
ll input;
for(ll i=0;i<n;i++)
{cin>>input;
arr.push_back({input,i});
	
}
sort(arr.begin(),arr.end());

ll pt=0,ct=n-1;
while(pt<ct	)
{
	if(arr[pt].first+arr[ct].first>x)
	ct--;
	else if(arr[pt].first+arr[ct].first<x)
	pt++;
	else 
	{
	cout<<arr[pt].second+1<<" "<<arr[ct].second+1<<endl;
	flag=1;
	break;}
	
}
if(!flag)cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
