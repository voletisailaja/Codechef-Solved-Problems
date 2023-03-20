#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+c!=b+d) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	return 0;
}
