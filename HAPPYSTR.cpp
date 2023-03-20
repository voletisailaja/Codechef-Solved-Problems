#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;

	    	for(int i=0; i<T; i++){
	    string S;
	int cs=0;
	    cin>>S;
	    for(int j=0;j<S.length();j++){
	        if(cs>2) break;
	        else if(strchr("aeiou",S[j])) cs++;
	        else if(!(strchr("aeiou",S[j]))) cs=0;
	    }
	    if(cs>2) cout<<"Happy"<<endl;
	    else cout<<"Sad"<<endl;    
	    
	}
	return 0;
}
