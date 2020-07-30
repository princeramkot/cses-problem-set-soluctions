#include<bits/stdc++.h>

#define ll long long
#define ar array

using namespace std;

int main()
{
	ll n,t;
	cin>>n>>t;
	
	ll int mid;
	vector<ll int> v;
	ll int input,mxy=0;
	for(ll i=0;i<n;i++)
	
	{
		cin>>input;
		v.push_back(input);
		mxy=max(mxy,input);
	}
	
	ll int l=0,r=t*mxy+1,ans, sum;

	while(l<=r)
	{
		mid=l+(r-l)/2;
		sum=0;
		for(ll i=0;i<n;i++)
		sum+=mid/v[i];
		
		if(sum>=t)
		{
			ans=mid;
			r=mid-1;
		}
		else
		l=mid+1;
		
		
		
	}
	cout<<ans<<endl;
	return 0;
}
