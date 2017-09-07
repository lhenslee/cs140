#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

struct coord {
    coord();
    int x, y;
};

coord::coord() {
    x = rand() % 100;
    y = rand() % 100;
}

int main() {
    srand(time(NULL));

    coord Q;
    coord *pQ = &Q;

    cout << Q.x << " " << pQ->x << " " << (*pQ).x << "\n"
         << Q.y << " " << pQ->y << " " << (*pQ).y << "\n";
}
