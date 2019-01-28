#include<iostream>
using namespace std;

class Base {
public:
	virtual void fun1()
	{
		cout << "Base::fun1()" << endl;
	}
};

class Derived :public Base {
	virtual void fun1()
	{
		cout << "Derived::fun1()" << endl;
	}
};

int main()
{
	Base b, *p;
	Derived d;
	p = &b;
	p->fun1();
	p = &d;
	p->fun1();
	return 0;
}