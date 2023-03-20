#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    float B, LS, min, max;
	    cin >> B >> LS;
	    min = sqrt(LS*LS - B*B);
	    max = sqrt(LS*LS + B*B);
	    cout << min << " " << max << endl;
	}
	return 0;
}
