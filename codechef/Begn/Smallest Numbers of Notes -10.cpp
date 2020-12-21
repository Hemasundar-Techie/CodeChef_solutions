//problem-10
//Smallest Numbers of Notes 


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int b[]={1,2,5,10,50,100};
        int rem=0,count=0;
        for(int i=5;i>=0;i--)
        {
            rem=a%b[i];
            count+=a/b[i];
            a=rem;
            if(rem==0)
            {
                break;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}

