#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int e=a+c*d;
	    if(e==b) cout<<"filled"<<endl;
	    else if(e>b) cout<<"overflow"<<endl;
	    else cout<<"unfilled"<<endl;
	}
	return 0;
}
