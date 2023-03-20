#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int i=x*y;
	    int j=x*z;
	    int total=j-i;
	    cout<<total<<endl;
	}
	return 0;
}
