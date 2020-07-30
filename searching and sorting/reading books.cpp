#include<bits/stdc++.h>

#define ll long long
#define ar array

using namespace std;
const int mx=2e5;
int main()
{
ll n,mxy=-1,sum=0;
ll a[mx];
cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i];
mxy=max(mxy,a[i]);
sum+=a[i];
	
}

cout<<max(sum,2*mxy);
	return 0;
}
