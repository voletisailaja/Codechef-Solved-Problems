#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    int d=y%z;
	    if(d==0) cout<<x*(y/z)<<endl;
	    else cout<<(x*(y/z))+x<<endl;
	    
	}
	return 0;
}
