#include <iostream>
using namespace std;

class Parent {
public:
	Parent() {cout << "Parent()\n";}
	virtual ~Parent() {cout << "~Parent()\n";}
	void func()          { cout << "Parent\n"; }
	virtual void Vfunc() { cout << "virtual Parent\n"; }
};

class Child : public Parent {
public:
	Child() {cout << "Child()\n";}
	~Child() {cout << "~Child()\n";}
	void func() { cout << "Child\n"; }
	void Vfunc() { cout << "virtual Child\n"; }
};

int main() {
	Parent* p = new Parent;
	cout << endl;
	Child* c = new Child;
	cout << endl;
	Parent* u = new Child;
	cout << "--------------" << endl;

	p->func(); // Parent
	c->func(); // Child
	u->func(); // Parent

	cout << endl;

	p->Vfunc(); // virtual Parent
	c->Vfunc(); // virtual Child
	u->Vfunc(); // virtual Child

	cout << "--------------" << endl;
	delete p;
	cout << endl;
	delete c;
	cout << endl;
	delete u;
}