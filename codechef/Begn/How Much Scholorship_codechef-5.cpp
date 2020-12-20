//problem-5
//How Much Scholorship

#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n>=1 && n<=100)
	{
	    if(n>=1 && n<=50)
	    {
	        cout<<100<<endl;
	    }
	    else
	    {
	        cout<<50<<endl;
	    }
	}
	else
	{
	    cout<<"0"<<endl;
	}
	return 0;
}

