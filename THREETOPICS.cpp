#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	if(((a!=b!=c) && (a==x || b==x || c==x))) cout<<"yes";
	else cout<<"no";
	return 0;
}
