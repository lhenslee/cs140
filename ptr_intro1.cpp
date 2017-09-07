#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int N=3;
    int X[N];

    // print variable addresses C++ style
    cout << "&N    = " << &N << "\n";
    for (int i=0; i<N; i++)
        cout << "&X[" << i << "] = " << &X[i] << "\n";

    cout << "\n";

    // print variable addresses C style
    printf("&N    = %p\n", &N);
    for (int i=0; i<N; i++)
        printf("&X[%d] = %p : %p\n", i, &X[i], X+i);
}
