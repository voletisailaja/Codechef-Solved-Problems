#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2,z,z2;
	    cin>>x1>>x2>>y1>>y2;
	    int f=max(abs(x1-y1),abs(x2-y2));
	    cout<<f<<endl;
	    
	}
	return 0;
}
