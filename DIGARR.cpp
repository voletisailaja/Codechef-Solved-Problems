#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,f=0;
	cin>>t;
	string s;
	while(t--)
	{
	  cin>>n;
	  cin>>s;
	  f=0;
	  for(int i=0;i<n;i++)
	  {
	    if(s[i]=='5' || s[i]=='0')
	    {
	      f++;
	    }
	  }
	  if(f>0)
	  cout<<"Yes"<<endl;
	  else
	  cout<<"No"<<endl;
	}
	return 0;
}
