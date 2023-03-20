#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(y>x/2)
	    cout<<x/2;
	    else cout<<y;
	    cout<<endl;
	}
	return 0;
}
