#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int h=c/a;
	    int i=d/b;
	    int tot=h+i;
	    cout<<tot<<endl;
	}
	return 0;
}
