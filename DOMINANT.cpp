#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>(b+c)||c>(a+b)||b>(a+c)) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
