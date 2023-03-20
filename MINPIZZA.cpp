#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int ans=n*x;
	    int sol=ans/4;
	    if(ans%4==0){
	        cout<<sol<<endl;
	    }
	    else
	    cout<<sol+1<<endl;
	}
	return 0;
}
