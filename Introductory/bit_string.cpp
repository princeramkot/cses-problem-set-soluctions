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
   ll n,s=1;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	s=2*s%((int)1e9+7); //1e9+7 is for mod
   }
   cout<<s;
    return 0;
}
