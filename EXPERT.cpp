#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x,y;
	    cin>>x>>y;
	    if(((y/x)*100)>=50) cout<<"yes"<<"\n";
	    else cout<<"no"<<"\n";
	 
	}
	return 0;
}
