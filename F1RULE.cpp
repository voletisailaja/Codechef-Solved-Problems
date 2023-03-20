#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(1.07*x>=y){
	        cout<<"yes";
	    }
	    else{
	        cout<<"no";
	    }
	    cout<<endl;
	}
	return 0;
}
