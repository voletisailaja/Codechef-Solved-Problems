#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	cin >> t;
	while(t--) {
		cin >> x >> y;
		if (x == y) {
			cout << 2 * y - 1 << endl;
			
		}
		else{
		cout << 2 * y + x-y << endl;
	}}
	return 0;
}
