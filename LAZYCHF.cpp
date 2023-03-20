#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,m,d;
	    cin>>x>>m>>d;
	    int e=x*m;
	    int f=x+d;
	    cout<<min(e,f)<<endl;
	}
	
	return 0;
}
