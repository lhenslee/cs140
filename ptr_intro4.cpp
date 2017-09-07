#include <iostream>
using namespace std;

int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && (*s1 == *s2)) {
        s1++, s2++;
    }

    return (*s1 || *s2) ? 0 : 1;
}

int main(int argc, char *argv[]) {

    // check we are given two arguments
    if (argc != 3) {
        cout << argv[0] << " arg1 arg2\n";

        // check if the arguments are the same
    } else {
        if (strcmp(argv[1], argv[2]) == 1)
            cout << "arguments are identical\n";
        else
            cout << "arguments are different\n";
    }
}
