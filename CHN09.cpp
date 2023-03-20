#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int u=0;
	    int v=0;
	    for(int i=0;i<s.size();i++){
	        
	        if(s[i]=='a')
	        {
	           u++;
	        }
	        
	        if(s[i]=='b')
	        {
	            v++;
	        }
	        
	    }
	    int ans=min(u,v);
	    cout<<ans<<endl;
	    
	   
	    
	}
	return 0;
}
