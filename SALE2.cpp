#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	   cout<<(((n/3)*2)*x) + ((n%3)*x)<<endl;
	}
	return 0;
}
