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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do
    {
    	ans.push_back(s);
	}
	while(next_permutation(s.begin(),s.end()));
	cout<<ans.size()<<endl;
	for(string a:ans)
	cout<<a<<endl;
	 
	
	
	
    return 0;
}
