#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
	cin>>t;
	while(t--){
	    cin>>n>>x;
	    if((n-x)<=0){
	        cout<<0<<endl;
	    }
	   else{
	   if((n-x)%4==0){
	        cout<<(n-x)/4<<endl;
	    }
	    else{
	        cout<<((n-x)/4)+1<<endl;
	    }
	   }
	}
	return 0;
}
