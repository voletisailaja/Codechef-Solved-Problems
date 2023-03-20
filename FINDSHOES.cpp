#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n>m) cout<<(2*n)-m;
	    else cout<<n;
	    cout<<endl;
	    
	}
	return 0;
}
