#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b+c>=100 && a>=10 && b>=10 && c>=10) cout<<"PASS";
	    else cout<<"FAIL";
	    cout<<endl;
	}
	return 0;
}
