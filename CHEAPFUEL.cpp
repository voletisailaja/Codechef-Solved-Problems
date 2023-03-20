#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t; 
	cin>>t; 
	while(t--)
	{
	    int x,y,a,b,k; 
	    cin>>x>>y>>a>>b>>k; 
	    x=x+(a*k); 
	    y=y+(k*b); 
	    
	    if(x<y)
	    {
	        cout<<"Petrol"<<endl;
	    }
	    else if(x>y)
	    {
	        cout<<"Diesel"<<endl;
	    }
	    else
	    {
	        cout<<"SAME PRICE"<<endl;
	    }
	}
	return 0;
}
