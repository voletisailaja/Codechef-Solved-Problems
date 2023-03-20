#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,d;
	    cin>>x>>y>>d;
	    if(abs(x-y)<=d) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
