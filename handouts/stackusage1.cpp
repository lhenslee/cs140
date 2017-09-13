#include "stack.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
		stack v;
		int value;
		cout << "enter values:\n";
		while (cin >> value) {
				v.push(value);
				cout << value << "\n";
		}
		cout << "--- LIFO\n";
		while (!v.empty()) {
				value = v.top();
				v.pop();
				cout << value << "\n";
		}
}
