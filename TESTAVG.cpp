#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    float avg1,avg2,avg3;
	   avg1=(a+b)/2;
	   avg2=(a+c)/2;
	   avg3=(b+c)/2;
	   if(avg1>=35 && avg2>=35 && avg3>=35) cout<<"Pass"<<endl;
	   else if(avg1<35 || avg2<35 || avg3<35) cout<<"Fail"<<endl;
	   
	}
	return 0;
}
