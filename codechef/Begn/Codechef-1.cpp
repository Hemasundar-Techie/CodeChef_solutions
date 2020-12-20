//CodeChef Beginer Level Problem-1
//Lazy Jem

#include <iostream>
using namespace std;
#define ull unsigned long long

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ull n,b,m;
	    cin>>n>>b>>m;
	    ull sum=0;
	    while(n>0)
	    {
	        if(n%2!=0)
	        {
	            sum=sum+((n+1)/2)*m+b;
	            m=2*m;
	            n=n-(n+1)/2;
	        }
	        else
	        {
	            sum=sum+(n/2)*m+b;
	            m=2*m;
	            n=n-(n/2);
	        }
	    }
	    cout<<sum-b<<endl;
	}
	return 0;
}

