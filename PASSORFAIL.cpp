#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
   cin>>t;
    int a,b,c;
        while (t--) {
            cin>>a>>b>>c;
            if (3*b + (a - b) * - 1 >= c) {
                cout << "PASS"<<endl;
            }
            else {
                cout << "FAIL"<<endl;
            }
        }
	return 0;
}
