#include<iostream>
using namespace std;

class Base {
public:
	virtual void fun1()
	{
		cout << "Base::fun1()" << endl;
	}
	virtual void fun2()
	{
		cout << "Base::fun2()" << endl;
	}
};

class Derived :public Base {
	virtual void fun1()
	{
		cout << "Derived::fun1()" << endl;
	}
	virtual void fun3()
	{
		cout << "Derived::fun3()" << endl;
	}
};

int main()
{
	Base b;
	Derived d;
	b.fun1();
	b.fun2();
	d.
	d.fun1();
	d.fun2();
	return 0;
}
