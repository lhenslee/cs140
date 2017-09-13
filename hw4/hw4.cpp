#include <iostream>
using namespace std;

class stack {
	public: 
		stack();
		~stack();

		bool empty() const;
		int size()   const;

		void push(const int &din);
		void pop();
		const int & top();
		void print();
	private:
		int* myarray;
		int Nmax;
		int arraysize;
};

stack::stack() {
	myarray = NULL;
	Nmax = 10;
	arraysize = 0;
}

stack::~stack() {
	delete [] myarray;
	myarray = NULL;
}

void stack::push(const int &din) {
	arraysize++;
	myarray = new int[0];
	for (int i=0; i<=(arraysize-1); i++) {
		cout << myarray[i] << " - " << i << "\n";
		int temp = myarray[i];
		myarray = new int[i+1];
		myarray[i+1] = temp;
	}
	myarray[0] = din;
}

void stack::print() {
	for (int i=0; i<2; i++) {
		cout << myarray[i] << " - " << i << "\n";
	}
}

int main (int argc, char** argv) {
	stack s;
	s.push(5);
	s.push(6);
	//s.print();
}

