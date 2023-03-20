#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int p = a+c;
	    if(b>=p){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<p<<endl;
	    }
	}
	return 0;
}
