//problem-14
//Farmer Feb

#include <iostream>
using namespace std;
int isPrime(int);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int n=a+b;
	    int k=n;
	    for(int i=n+1;;i++)
	    {
	        
	        if(isPrime(i))
	        {
	            k=i-k;
	            cout<<k<<endl;
	            break;
	        }
	        
	    }
	}
	return 0;
}

int isPrime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
