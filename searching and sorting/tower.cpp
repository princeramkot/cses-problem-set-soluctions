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
vector<int>v;
int a;
for(int i=0;i<n;i++)
{
	cin>>a;
	int p=upper_bound(v.begin(),v.end(),a)-v.begin();

	if(p<v.size())
	{//cout<<"replacing "<<v[p] <<"with "<<a<<endl;
	v[p]=a;
}
	else
	{ //cout<<"pushing "<<a<<endl;
	v.push_back(a);
		}	
  
}

cout<<v.size();
 return 0;}
