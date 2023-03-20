#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t,n,temp,count;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            if(temp>=10 && temp<=60)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
