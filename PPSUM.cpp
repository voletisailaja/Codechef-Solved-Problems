#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
         int n=b;
	    for(int i=0;i<a;i++)
	    {
	        int r=n*(n+1)/2;
	        n=r;
	    }
	    cout<<n<<endl;
	}
	return 0;
}
