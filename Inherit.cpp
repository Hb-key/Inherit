
#include<iostream>

class Base {
public:
	virtual void fun1()
	{}
	virtual void fun2()
	{}
private:
	int _b;
};

class Derived :public Base {
	virtual void fun1()
	{}
	virtual void fun3()
	{}
private:
	int _d;
};