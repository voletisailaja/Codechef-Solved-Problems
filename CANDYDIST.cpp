#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	   
	    if((n/m)%2==0 && n%m==0) cout<<"yes";
	    else cout<<"no";
	    cout<<endl;
	}
	return 0;
}
