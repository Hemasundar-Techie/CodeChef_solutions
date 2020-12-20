//CodeChef Beginer Level Problem-4
//Flat Land

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin>>t;
	
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll count=0;
	    while(n)
	    {
	        ll x=pow(n,0.5);
	        ll m=x*x;
	        n=n-m;
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

