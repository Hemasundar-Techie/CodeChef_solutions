//problem-13
//factorial


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int fact=1;
	    while(a>0)
	    {
	       fact*=a--; 
	    }
	    cout<<fact<<endl;
	}
	return 0;
}

