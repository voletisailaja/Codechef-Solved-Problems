#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	cin >> T;
	int A, B;
	for(int i = 0; i < T; i++){
	    cin >> A >> B;
	    if(21-A-B > 10){
	        cout << "-1" << endl;
	    }
	    else{
	        cout << 21-A-B << endl;
	    }
	}
	}
	
	
