#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,x;
	    cin>>n>>m>>x;
	    int u=(2*n)+(2*m);
	    cout<<u*x<<endl;
	}
	return 0;
}
