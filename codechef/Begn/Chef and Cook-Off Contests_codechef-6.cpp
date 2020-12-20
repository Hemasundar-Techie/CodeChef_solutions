//problem-6
//Chef and Cook-Off Contests

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool arr[]= {false,false,false,false,false};
	    for(int i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        
	        if(s[0]=='e'&& s[4]=='\0')
	        {
	            arr[0]=true;
	        }

	       
            if(s[0]=='s')
	        {
	            arr[1]=true;
	        }
	        
	        if(s[0]=='c')
	        {
	            arr[2]=true;
	        }
	        
            if(s[0]=='e'||s[0]=='m')
	        {
	            if(s[0]=='e' && s[4]!='\0')
	            {
	                arr[3]=true;
	            }
	            else
	            if(s[0]=='m' && s[6]=='\0')
	            {
	                arr[3]=true;
	            }
	            
	        }
	       
	        if(s[0]=='m' || s[0]=='h')
	        {
	             if(s[0]=='m' && s[6]!='\0')
	            {
	                arr[4]=true;
	            }
	            else
	            if(s[0]=='h')
	            {
	                arr[4]=true;
	            }
	            
	        }
	    }
	    int count=0;
	    for(int i=0;i<5;i++)
	    {
	        if(arr[i]==true)
	        {
	            count++;
	        }
	    }
	    if(count==5)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

