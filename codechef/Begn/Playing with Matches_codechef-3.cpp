//Codechef beg-3
//Playing with Matches 

#include <iostream>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    ll sum=a+b;
	    ll count=0;
	    while(sum)
	    {
	        ll rem=sum%10;
	        switch (rem){
	            case 0:
	                    count+=6;
	                    break;
	            case 1:
	                    count+=2;
	                    break;
	            case 2:
	                    count+=5;
	                    break;	
                case 3:
	                    count+=5;
	                    break;
	            case 4:
	                    count+=4;
	                    break;
	            case 5:
	                    count+=5;
	                    break;
	            case 6:
	                    count+=6;
	                    break;	
                case 8:
	                    count+=7;
	                    break;
	            case 9:
	                    count+=6;
	                    break;
	            case 7:
	                    count+=3;
	                    break;
	        }
	        sum=sum/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

