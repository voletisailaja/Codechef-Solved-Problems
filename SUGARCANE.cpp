#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int a,b,c,d,total;
	    d=50*x;
	    a=d*20/100;
	    b=d*20/100;
	    c=d*30/100;
	    total=a+b+c;
	    cout<<d-total<<endl;
	}
	return 0;
}
