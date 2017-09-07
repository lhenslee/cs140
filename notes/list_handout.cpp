#include <iomanip>
#include <iostream>
using namespace std;

class list {  
    public:    
        list(int N=0);    
        ̃list();    
        bool empty() const { return N == 0; }    
        int size()            
        const { return N; }    
        void clear();    
        void insert(int, const int &);    
        void erase(int);    
        void push_back(const int &);    
        void pop_back();    
        const int & back() const;    
        int & operator[](int);  
    private:    
        int N, Nmax;    
        int Nincr;    
        int *data;    
        void resize();
};

list::list(int n_N) {  
    N = 0;  
    Nmax = n_N;  
    Nincr = 10;  
    data = new int[Nmax];  
    for (int i=0; i<Nmax; i++)    
        data[i] = 0;
} 

list:: ̃list() { 
    if (data) 
        delete [] data; 
}

void list::clear() {  
    for (int i=0; i<N; i++)    
        data[i] = 0;  N = 0;
}

void list::insert(int i, const int &din) {  
    if (N == Nmax) 
        resize();  
    for (int j=N; i<j; j--) // move i:N to the right    
        data[j] = data[j-1];  
    data[i] = din;  
    N++;
}

void list::erase(int i) {  
    for (int j=i; j<N; j++) // move i:N to the left    
        data[j] = data[j+1];  
    data[N-1] = 0;  N--;
}

void list::push_back(const int &din) { insert(N, din); }
void list::pop_back() { erase(N-1); }
const int & list::back() const { return data[N-1]; }
int & list::operator[](int i) { return data[i]; }

void list::resize() {  
    int M = Nmax + Nincr;  
    int *newdata = new int[M];  
    for (int i=0; i<N; i++)    
        newdata[i] = data[i];  
    for (int i=N; i<M; i++)    
        newdata[i] = 0;  
    delete [] data;  
    data = newdata;  
    Nmax = M;
}
