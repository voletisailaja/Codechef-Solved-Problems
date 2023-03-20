#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
        
	    int p = (500-(2*x))+(1000-((x+y)*4));
	    int q = (1000-(4*y))+(500-((x+y)*2));
	    cout<<max(p,q)<<endl;
	}
	return 0;
}
