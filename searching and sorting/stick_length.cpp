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
ll n;cin>>n;
ll arr[n];

for(ll i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
ll mid=arr[n/2];

ll cost=0;
for(ll i=0;i<n;i++)
{
	cost+=abs(arr[i]-mid);
}
cout<<cost<<endl;
    return 0;
}
