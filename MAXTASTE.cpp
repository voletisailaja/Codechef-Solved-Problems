#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x,y;
	    if(a>b){
	        x=a;
	    }
	    else {
	        x=b;
	    }
	    if(c>d){
	        y=c;
	    }
	    else{
	        y=d;
	    }
	    cout<<x+y<<endl;
	}
	return 0;
}
