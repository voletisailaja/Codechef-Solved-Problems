#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<3) cout<<"LIGHT"<<endl;
	    else if(x>=7) cout<<"HEAVY"<<endl;
	    else cout<<"MODERATE"<<endl;
	}
	return 0;
}
