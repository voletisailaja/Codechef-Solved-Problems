#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x>=y) cout<<0;
	    else cout<<y-x;
	    cout<<endl;
	}
	
}
