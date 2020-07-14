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
for(int i=0;i<n;++i)
cin>>arr[i];

vector<int> v;

sort(arr,arr+n);

ll diff=0;	
for(int i=0;i<n;i++)
{
	if(arr[i]!=arr[i+1])
	diff++;
		
	
}
cout<<diff<<endl;

	
    return 0;
}
