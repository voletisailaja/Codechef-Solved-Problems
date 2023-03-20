#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int n;
	cin>>n;
	while(n--)
	{
	    float a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a/c)==(b/d))
	    {
	        cout<<"Both"<<endl;
	    }
	    else if((a/c)<(b/d))
	    {
	        cout<<"Chef"<<endl;
	    }
	    else
	    {
	        cout<<"Chefina"<<endl;
	    }
	}
	return 0;
}
