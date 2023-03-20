#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	   int z=x/25;
	   int y=x%25;
	   if(y>0) cout<<z+1<<endl;
	   else cout<<z<<endl;
	}
	return 0;
}
