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
   ll n,s=1,five=5,zero=0;
   cin>>n;
   while(n/five>0)
   
   {
   	
   	zero+=n/five;
   	five=five*5;
   	
   }
   cout<<zero;
    return 0;
}
