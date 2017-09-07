#include <iostream>
using namespace std;

void hello() { cout << "hello world\n"; }
void howdy() { cout << "howdy world\n"; }

void print(void (*F)()) { F(); }

int main() {
    print(hello);
    print(howdy);
}
