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
int arr[mx];

unordered_map<int,int>m;

for(int i=0;i<n;i++)
cin>>arr[i];



int ans=0;
for(int i=0,j=0;i<n;i++)
{
	while(j<n&&m[arr[j]]<1)
	{
		m[arr[j]]++;
		++j;
	}
	ans=max(j-i,ans);
	m[arr[i]]--;
}
cout<<ans;


    return 0;
}
