#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t,s,a,b,c,d,e;
	cin>>t;
	
	while(t--){
	    cin>>a>>b>>c>>d>>e;
	    s=a+b+c+d+e;
	    if(s==0){
	        cout<<"Beginner"<<endl;
	    }
	    else if(s==1){
	        cout<<"Junior Developer"<<endl;
	    }
	    else if(s==2){
	        cout<<"Middle Developer"<<endl;
	    }
	     else if(s==3){
	        cout<<"Senior Developer"<<endl;
	    }
	     else if(s==4){
	        cout<<"Hacker"<<endl;
	    }
	     else if(s==5){
	        cout<<"Jeff Dean"<<endl;
	    }
	    
	}
	return 0;
}
