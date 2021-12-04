#include <bits/stdc++.h>
using namespace std;
int main () {
	int i=12;
	cout<<&i<<endl;
	int *p=&i;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<sizeof(p)<<endl;

	float f=10.2;
	float *pf=&f;
	cout<<pf<<endl;
 
	double d=122.32;
	double *pd=&d;
	cout<<pd<<endl;
	return 0;
}