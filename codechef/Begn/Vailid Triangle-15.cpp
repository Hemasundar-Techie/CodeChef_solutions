//problem-15
//Vailid Triangle


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int n=a+b+c;
	    if(n==180)
	    {
	        cout<<"YES"<<endl;
	        
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

