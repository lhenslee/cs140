#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    // prints the number of arguments
    cout << "Num args = " << argc << "\n";
    // prints the argument number, length of
    // argument, and argument itself
    for (int i=0; i<argc; i++)
    cout << "argv[" << i << "] = " << &argv[i] << " "  << argv[i]
         << "(strlen=" << strlen(argv[i]) << ")" << endl;
}
