#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l;
	int b;
	cin>>l;
	cin>>b;

    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter) {cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else if(perimeter>area) {cout<<"Peri"<<endl;
        cout<<perimeter<<endl;
    }
    else {cout<<"Eq"<<endl;
        cout<<area<<endl;
    }
	return 0;
}
