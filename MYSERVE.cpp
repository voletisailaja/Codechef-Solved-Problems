#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t,p,q;
	cin>>t;
	while(t--){
	    
	    cin>>p>>q;
	    int a=p+q;
	    if(a%4==0 || a%4==1){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	    
	}
	return 0;
}
