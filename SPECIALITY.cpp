#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>max(y,z)){
	        cout<<"setter"<<'\n';
	         }
	         else if(y>max(x,z)){
	             cout<<"tester" <<'\n';
	         }
	         else{
	             cout<<"editorialist"<<'\n';
	         }
	    
	}
	return 0;
}
