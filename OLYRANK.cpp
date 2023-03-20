#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    int x=a+b+c;
	    int y=d+e+f;
	    if(x>y) {cout<<1<<endl;}
	    else {cout<<2<<endl;}
	}
	return 0;
}
