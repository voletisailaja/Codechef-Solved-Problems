#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,n;
	cin>>t;
	while(t--){
	    int c=0;
	    cin>>a>>b;
	    while(a--){
	        cin>>n;
	        if((n+b)%7==0) c++;
	        
	    }
	    cout<<c<<endl;
	}
	return 0;
}
