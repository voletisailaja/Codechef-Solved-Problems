#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int x=0,y=0;
	    cin>>x>>y;
	    if(x==y)
	                cout<<0<<endl;
	    else if(x<y)
	    {
	        cout<<(y-x)<<endl;
    	}
    	else if(y<x)
    	{
    	    if((x-y)%2==0)
    	  cout<<((x-y)/2)<<endl;
    	    else
    	    {
    	  x=x+1;
    	 cout<<((x-y)/2)+1<<endl;
    	    }
    	                    
    	}
	}
	return 0;
}
