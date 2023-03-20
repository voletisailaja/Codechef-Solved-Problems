#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w,a,b,c,d;
	    cin>>w;
	   
	    cin>>a>>b>>c>>d;
	    int l=max(max(a,b),max(c,d));
	    
	    cout<<l<<endl;
	}
	return 0;
}
