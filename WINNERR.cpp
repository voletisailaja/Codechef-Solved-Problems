#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin>>a>>b;
	    cin>>c>>d;
	    e=max(a,b);
	    f=max(c,d);
	    if(e>f) {cout<<"Q"<<endl;}
	    else if(e<f) {cout<<"P"<<endl;}
	    else cout<<"TIE"<<endl;
	}
	return 0;
}
