#include <iostream>
using namespace std;
int main (){
	int i=65;
	char p=i;
	cout<<p<<endl;
	int *p=&i;
	char *pc=(char*)p;
	cout<<*pc<<endl;
	cout<<*p<<endl;
	cout<<*(pc+1)<<endl;
	cout<<*(pc+2)<<endl;
	cout<<*(pc+3)<<endl;


	return 0;
}