#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int x,y,z,total;
		cin >> x >> y >> z;
		total = x+y;
		if(total<=z)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}}
	return 0;
}
