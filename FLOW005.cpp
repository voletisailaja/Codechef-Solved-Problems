#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int hundred=n/100;
	    n=n%100;
	    int fifty=n/50;
	    n=n%50;
	    int ten=n/10;
	    n=n%10;
	    int five=n/5;
	    n=n%5;
	    int two=n/2;
	    n=n%2;
	    int one=n/1;
	    n=n%1;
	    int tot=hundred+fifty+ten+five+two+one;
	    cout<<tot<<endl;
	}
	return 0;
}
