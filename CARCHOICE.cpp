#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    float c=y1/x1;
	    float d=y2/x2;
	    if(c<d) {cout<<-1<<endl;}
	    else if(c==d) {cout<<0<<endl;}
	    else if(c>d) {cout<<1<<endl;}
	}
	return 0;
}
