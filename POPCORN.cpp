#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	
	
	while(t--)
	{
	   int a,b,c,a1,a2,b1,b2,c1,c2;
       a=b=c=0;
	    cin>>a1>>a2;
	    cin>>b1>>b2;
	    cin>>c1>>c2;
	    
	    a=a1+a2;
	    b=b1+b2;
	    c=c1+c2;
	    
	    if(a>b)
	    {
	        if(a>c)
	        {
	            cout<<a<<endl;
	        }
	        else
	        cout<<c<<endl;
	    }

        if(b>a)
        {
            if(b>c)
            {
                cout<<b<<endl;
            }
            else
                cout<<c<<endl;
        }
	}

	return 0;
}
