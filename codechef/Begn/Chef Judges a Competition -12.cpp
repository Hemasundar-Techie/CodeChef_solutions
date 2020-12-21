//problem-12
//Chef Judges a Competition 


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int arr[2];
	    for(int i=0;i<2;i++)
	    {
	        int max=0,sum=0;
	        for(int i=0;i<a;i++)
	        {
	            int n;
	            cin>>n;
	            sum+=n;
	            max= max<n?n:max;
	         }
	         arr[i]=sum-max;
	    }
	    if(arr[0]==arr[1])
	    {
	        cout<<"Draw"<<endl;
	    }
	    else
	    if(arr[0]<arr[1])
	    {
	        cout<<"Alice"<<endl;
	    }
	    else
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}

