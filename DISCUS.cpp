#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,m;
	    cin>>a>>b>>c;
	    m=max(a,b);
	    cout<<max(m,c)<<endl;
	}
	return 0;
}
