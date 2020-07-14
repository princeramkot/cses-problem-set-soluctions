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
set<array<int,2>>s;
ll n;
cin>>n;
ll l,r;
while(n--)
{cin>>l>>r;
s.insert({l,1});
s.insert({r,-1});
	
}

int ans=0,c=0;
for(array<int,2>a:s)
{
	c+=a[1];
	ans=max(c,ans);
}
cout<<ans<<endl;

    return 0;
}
