#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=100) cout<<x;
	    else cout<<x-10;
	    cout<<endl;
	}
	return 0;
}
