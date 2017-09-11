#include <iostream>
using namespace std;

int main() {
	int x = 25;
	int* p = &x;
	cout << "x = " << x
		<< "\n*p = " << *p
		<< "\n &*p = " << &*p
		<< "\n &x = " << &x
		<< "\n p = " << p
		<< "\n";
	return 0;
}
