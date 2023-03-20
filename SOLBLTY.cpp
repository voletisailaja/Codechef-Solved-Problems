#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int o=y+(100-x)*z;
	    cout<<o*10<<endl;
	}
	return 0;
}
