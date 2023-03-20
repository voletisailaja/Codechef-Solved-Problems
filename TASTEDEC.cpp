#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	while(t--){
	    cin>>x>>y;
	    if(2*x==5*y)
	        cout<<"Either"<<endl;
	    
	        else if(2*x>5*y)
	            cout<<"Chocolate"<<endl;
	        
	        else cout<<"Candy"<<endl;
	    
	}
	return 0;
}
