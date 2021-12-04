#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--) {
	    int x,y,a,b,k;
	    cin>>x>>y>>a>>b>>k;
	    while(k--) {
	    x=x+a;
	    y=y+b;
	    }
	    if(x>y){
	        cout<<"PETROL"<<endl;
	    }
	    else if(y>x) {
	        cout<<"DIESEL"<<endl;
	    }
	    else {
	        cout<<"SAME PRICE"<<endl;
	    }
	    
	}
	return 0;
}