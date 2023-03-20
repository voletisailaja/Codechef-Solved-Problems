#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for (int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for (int j=0;j<n;j++)
	        cin>>arr[j];
	    int count=1;
	    for (int j=1;j<n;j++){
	        if (arr[j-1]!=arr[j])
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
