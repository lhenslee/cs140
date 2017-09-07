#include <iostream>
using namespace std;

class coord {
    public:
        coord();
        ~coord();

        void set(int, int);

    private:
        int x;
        int y;

        friend ostream & operator<<(ostream &, const coord &);
};

coord::coord() { 
    cout << "coord constructor\n";
    x = 0;
    y = 0;
}

coord::~coord() { 
    cout << "coord destructor\n";
}

void coord::set(int n_x, int n_y) { x = n_x; y = n_y; }

ostream & operator<<(ostream &out, const coord &P) {
    out << P.x << " " << P.y;
    return out;
}

int main() {
    int N = 5;
    coord A[N];

    cout << "---\n";

    for (int i=0; i<N; i++)
        A[i].set(i, N-i);

    for (int i=0; i<N; i++)
        cout << A[i] << "\n";

    cout << "---\n";
}
