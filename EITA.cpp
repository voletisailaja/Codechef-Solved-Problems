#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    int p=x*7;
	    int q=(y*d)+z*(7-d);
	    cout<<max(p,q)<<endl;
	}
	return 0;
}

