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
    lli n;
    cin >> n;
    
    for(int k=1;k<=n;k++)
    {
    	ll a1= k*k, a2= a1*(a1-1)/2;
  	if(k>2)
  	a2-=4*(k-1)*(k-2);
  	cout<<a2<<endl;
	}
  
  	
    return 0;
}
