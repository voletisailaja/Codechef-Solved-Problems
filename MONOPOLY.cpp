#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3;
	    cin>>r1>>r2>>r3;
	    if(r1>r2+r3 || r2>r1+r3 || r3>r1+r2) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0;
}
