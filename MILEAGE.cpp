#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	
	while(t--)
	{
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    
	    float p = (n/a);
	    float q = (n/b);
	    
	    float r = (p*x);
	    float s = (q*y);
	    if(r>s)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    else if(r<s)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    else {
	        cout<<"ANY"<<endl;
	    }
	    
	}
	return 0;
}
