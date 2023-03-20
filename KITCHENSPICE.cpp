#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	   
	    if(x<4) cout<<"MIld"<<endl;
	  
	    else if(x<7 && x>=4) cout<<"MEDium"<<endl;
	    else cout<<"Hot"<<endl;
	}
	return 0;
}
