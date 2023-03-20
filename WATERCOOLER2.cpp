#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int p=y/x;
	    if(x<y) cout<<(y-1)/x<<endl;
	    else cout<<0<<endl;
	    
	}
	return 0;
}
