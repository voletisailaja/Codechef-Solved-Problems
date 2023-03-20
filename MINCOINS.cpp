#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a;
	    cin>>a;
	    if(a%10==0){cout<<a/10<<endl;}
	    else if(a%10!=0 && a%5==0) {cout<<(a/10)+1<<endl;}
	    else {cout<<-1<<endl;}
	}
	return 0;
}
