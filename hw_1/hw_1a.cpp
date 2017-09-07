#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    // puts out the number of arguments 
    cout << "Num args = " << argc << "\n";
    // wrights the argument and arg number
    for (int i=0; i<argc; i++)
    cout << "argv[" << i << "] = " << &argv[i] << " "  << argv[i] << endl;
    
}
