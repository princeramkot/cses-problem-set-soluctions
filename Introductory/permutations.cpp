#include<iostream>
#include<bits/stdc++.h>
using namespace std;


#define ll long long 

int main()
{
	
ll n;cin>>n;ll arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
	//4 2 5 3 1
	//1234
	//123456
	// 5 3 1 6 4 2
	if(n==2 || n==3)
	{
		cout<<"NO SOLUTION";
		return 0;
	}
	for(int i=n-1;i>0;i-=2)
		cout<<i<<" ";
		for(int i=n;i>0;i-=2)
		cout<<i<<" ";
	


	


	
	
}
