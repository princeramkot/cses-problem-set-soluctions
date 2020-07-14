#include <iostream>
#include<bits/stdc++.h>

#include <algorithm>
#define lli long long int
#define li long int
#define ld long double

using namespace std;

int main()
{ 


long long n,m,k;
cin>>n>>m>>k;

long long app[n],aprt[m];
for(long long i=0;i<n;i++)
cin>>app[i];
for(long long i=0;i<m;i++)
cin>>aprt[i];


 sort(app,app+n);
 sort(aprt,aprt+m);
long long ptr1=0,ptr2=0,count=0;
while(ptr1<=n-1 && ptr2<=m-1)
{	
	if(aprt[ptr2]>=app[ptr1]-k && aprt[ptr2]<=app[ptr1]+k)
	{
		ptr1++;
		ptr2++;
		count++;
	}
	else if(app[ptr1]>aprt[ptr2])
		ptr2++;
		else 
		ptr1++;
}
cout<<count<<endl;
    return 0;
}
