#include <iostream>
using namespace std;

int main() {
	// your code goes here
		// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    if(n%2==0 && m%2==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        if(m%2==0)
	        cout<<m<<endl;
	        else if(n%2==0)
	        cout<<n<<endl;
	        else
	        cout<<n+m-1<<endl;
	    }
	}
	return 0;
}
