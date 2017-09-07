#include <iostream>
using namespace std;
class coord {  public:    coord();    coord(const coord &);    ~coord();    coord & operator=(const coord &);    void set(int, int);  private:    int x;    int y;  friend ostream & operator<<(ostream &, const coord &);
};coord::coord(const coord &rhs) {   cout << "coord copy-constructor\n";  x = rhs.x;  y = rhs.y;}coord & coord::operator=(const coord &rhs) {   cout << "coord assignment\n";  x = rhs.x;  y = rhs.y;  return *this;}int main() {  coord A, B, C;  cout << "---\n";  A.set(1,2);  cout << "A: " << A << "\n";  cout << "---\n";  C = B = A;  cout << "B: " << B << "\n";  cout << "C: " << C << "\n";  cout << "---\n";  coord D = C;  cout << "D: " << D << "\n";  cout << "---\n";}
