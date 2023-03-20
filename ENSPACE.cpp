#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(x+(y*2)<=n) cout<<"yes"<<"\n";
	    else cout<<"no"<<"\n";
	}
	return 0;
}
