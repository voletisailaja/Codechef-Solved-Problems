#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    if(x>y){
	        cout<<(y*(n-k)+(k*x))<<endl;
	    }
	    else{
	        cout<<n*x<<endl;
	    }
	}
	return 0;
}
