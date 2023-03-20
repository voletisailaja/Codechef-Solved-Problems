#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t,x,y,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x%10==0)
	        a=x/10;
	    else
	        a=x/10+1;
	    if(y%10==0)
	        b=y/10;
	    else
	        b=y/10+1;
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}
