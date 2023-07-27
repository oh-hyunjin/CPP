#include <iostream>
using namespace std;

class First {
public:
	First() {cout << "First()\n";}
	~First() {cout << "~First()\n";}
};

class Second : public First {
public:
	Second() {cout << "Second()\n";}
	~Second() {cout << "~Second()\n";}
};

class Third : public Second {
public:
	Third() {cout << "Third()\n";}
	~Third() {cout << "~Third()\n";}
};

int main() {
	// Third *a = new Third();
	First *a = new Third();
	delete a;
}