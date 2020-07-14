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
int n;
cin>>n;
ll ans=-1e18,msf=-1e18;
for(int i=0;i<n;i++)
{
	ll a;
	cin>>a;
	
	msf=max(a,msf+a);
	
	ans=max(ans,msf);
}

cout<<ans;
    return 0;
}
