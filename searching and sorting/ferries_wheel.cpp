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


long long n,x;
cin>>n>>x;

ll arr[n];
for(ll i=0;i<n;i++)
{
	cin>>arr[i]	;
}

sort(arr,arr+n);
ll sum=0,count=0;
for(ll i=0,j=n-1;i<j;i++)
{
	while(i<j &&arr[i]+arr[j]>x )
	j--;
	
	if(i>=j)
	break;
	sum++;
	j--;
}
cout<<n-sum<<endl;
    return 0;
}
