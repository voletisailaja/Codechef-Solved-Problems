#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int w=(x*5)+(y*10);
	    cout<<w/z<<endl;
	}
	return 0;
}
