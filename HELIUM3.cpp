#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    
	    if(a*b>x*y) cout<<"no";
	    else cout<<"yes";
	    cout<<endl;
	}
	return 0;
}
