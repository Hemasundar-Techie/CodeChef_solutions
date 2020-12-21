//program-16
//The Block Game

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int num=0,rem;
	    int b=a;
	    while(a)
	    {
	        rem= a%10;
	        num=num*10+rem;
	        a=a/10;
	    }
	    if(num==b)
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}

