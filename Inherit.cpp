//#include<iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual void fun1()
//	{
//		cout << "Base::fun1()" << endl;
//	}
//};
//
//class Derived :public Base {
//	virtual void fun1()
//	{
//		cout << "Derived::fun1()" << endl;
//	}
//};
//
//int main()
//{
//	Base b, *p;
//	Derived d;
//	p = &b;
//	p->fun1();
//	p = &d;
//	p->fun1();
//	return 0;
//}

#include<iostream>
using namespace std;

//class Base {
//public:
//	virtual ~Base()
//	{
//		cout << "~Base()" << endl;
//	}
//};
//
//class Derived :public Base {
//public:
//	~Derived ()
//	{
//		cout << "~Derived()" << endl;
//	}
//};
//
//int main()
//{
//	Base* p1 = new Derived;
//	delete p1;   
//	return 0;
//}
#include<string>

#if 0
int main()
{
	//string s("hello");
	//cout << s.capacity() << endl;

	//cout << s.resize(30) << endl;

	//cout << sizeof(string) << endl;

	/*string name("Smith");
	string family("John");

	name += "K.";
	name += family;
	name += '\n';

	cout << name;*/
	//½ØÈ¡ÎÄ¼þÃû
	string File("123.txt");
	int begin = File.rfind('.');
	int end = File.rfind('\\');
	string strSuffix = File.substr(end+1,begin-end-1);
	cout << strSuffix << endl;

	return 0;
}

#endif

int main()
{
	//½ØÈ¡ÓòÃû
	string url("http://www.cplusplus.com/reference/string/string/?kw=string");
	size_t begin = url.find("://") + 3;
	size_t end = url.find('/', begin);

	cout << url.substr(begin, end - begin) << endl;
	return 0;
}
