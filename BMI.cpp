#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m,h;
	    cin>>m>>h;
	    if(m/(h*h)<=18) {cout<<1<<endl;}
	    else if(m/(h*h)>=30)  {cout<<4<<endl;}
	    else if((m/(h*h)>=19)&&(m/(h*h)<=24)) {cout<<2<<endl;}
	    else {cout<<3<<endl;}
	}
	return 0;
}
