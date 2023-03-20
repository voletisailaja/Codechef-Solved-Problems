#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=max(a,max(b,c));
	    if(x==a) cout<<"Alice";
	    else if(x==b) cout<<"Bob";
	    else cout<<"Charlie";
	    cout<<endl;
	    
	}
	
	
}
