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
	Nmax = 10;
	arraysize = 0;
	myarray = new int[Nmax];
}

stack::~stack() {
	delete [] myarray;
	myarray = NULL;
}

void stack::push(const int &din) {
	for (int i=0; i<=(arraysize-1); i++) {
		int temp = myarray[i];
		myarray[i+1] = temp;
	}
	myarray[0] = din;
	arraysize++;
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
	s.print();
}
=======
>>>>>>> fa13e6fa927649b4d0fa609ac95b9c1ceb0a9f23

