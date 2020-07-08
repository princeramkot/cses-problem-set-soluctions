#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#define lli long long int
#define li long int
#define ld long double
#define ll long long
using namespace std;

int main()
{
    ll n,sum=0;cin>>n;
    ll arr[n];
    ll ans=0;
    for(int i=0;i<n;i++)
	    {
	    	cin>>arr[i];
	    	sum+=arr[i];		
	}
	
	for(int i=0;i<1<<n;i++)
	{cout<<i<<endl;
		ll cs=0;
		for(int j=0;j<n;++j)
		if(i>>j&1)
		cs+=arr[j];
		if(cs<=sum/2)
		ans=max(ans,cs);
	}
	
	cout<<sum-2*ans;		
	
	
    
		
	
	
    return 0;
}
