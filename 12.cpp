#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
// class B
// {
// public:
// 	int m_iNum;
// 	virtual void foo() {
// 		printf("B foo()");
// 	}
// };

// class D: public B
// {
// public:
// 	char* m_szName[100];
// 	virtual void foo() {
// 		printf("D foo()");
// 	}
// };

class A
{
public:
	A(int i) {
		cout << "A created " << i << endl;
	}

	~A() {
		cout << "A destroyed"<< endl;
	}
};

class B : virtual public A
{
public:
	B(int i, int j = 0) : A(j) {
		cout << "B created " << i << endl;
	}

	~B() {
		cout << "B destroyed"<< endl;
	}
};

class C : virtual public A
{
public:
	C(int i, int j = 0) : A(j) {
		cout << "C created " << i << endl;
	}

	~C() {
		cout << "C destroyed"<< endl;
	}
};

class D : public C, public B 
{
public:
	D(int a, int b, int c, int d) : mem1(a), mem2(b), B(c), C(d), A(a) {

		cout << "D created" << endl;
	}

	~D() {
		cout << "D destroyed"<< endl;
	}
private:
	C mem2;
	B mem1;
};


int main(int argc, char * argv[]) {

	// D d(1,2,3,4);
	char *a = "hello ";
	char *b = "tencent";
	printf("%s %s %s\n",a ,b);

	// A a;
	// A *pa = &a;
	// pa->foo();
	// pa->pp();
	// // (dynamic_cast<B*>(pa))->foo();
	// // (dynamic_cast<B*>(pa))->pp();
	// // (dynamic_cast<B*>(pa))->FunctionB();
	// B* b = dynamic_cast<B*>(pa);
	// b->pp();


	// printf("%f \n", 5);
	// printf("%d", 5.001);

	// int n = 9;
	// double d = reinterpret_cast<double &>(n);
	// printf("%f \n", d);
	// B* pb = new B();
	// D *pd1 = static_cast<D*>(pb);
	// pd1->foo();
	// D *pd2 = dynamic_cast<D*>(pb);
	// pd2->foo();

	// delete pb;

	return 0;
}
