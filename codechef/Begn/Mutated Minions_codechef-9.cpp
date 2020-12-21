//problem-9
//Mutated Minions

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int count=0;
	    for(int i=0;i<a;i++)
	    {
	        int n;
	        cin>>n;
	        n=n+b;
	        if(n%7==0)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

