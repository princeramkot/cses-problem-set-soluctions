#include<bits/stdc++.h>

#define ll long long
#define ar array

using namespace std;
const int mx=2e5;
int main()
{
int n;
ar<int,2> a[mx];
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i][0]>>a[i][1];

sort(a,a+n);
ll t=0,r=0;
for(int i=0;i<n;i++)
{
	t+=a[i][0];
	r+=a[i][1]-t;
}
cout<<r<<endl;

	return 0;
}
