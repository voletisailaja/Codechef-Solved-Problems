#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,a;
	    cin>>x;
	    a=x/10;
	    if(a<=100) cout<<"100"<<endl;
	    else cout<<a<<endl;
	}
	return 0;
}
