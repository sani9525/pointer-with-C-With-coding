#include <bits/stdc++.h>
using namespace std;
class base
{
	public :
	void fun ()
	{
		cout<<"fun of base"<<endl;
	}

};
class Derived : public base
{
	public :
	void fun ()
	{
		cout<<"fun of derived"<<endl;
	}
};
int main ()
{
	Derived d;
	d.fun ();
	return 0;
}