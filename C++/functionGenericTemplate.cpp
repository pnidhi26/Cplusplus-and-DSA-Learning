#include <iostream>
using namespace std;

// to reuse the same function with diff data types

template<typename Type>
// template<class Type>

void Swap(Type& a, Type& b){
    Type temp = a;
    a = b;
    b =  temp;
}

int main() {
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a,b);
    cout << a << " - " << b << endl;

    char c='c', d='d';
    cout << c << " - " << d << endl;
    swap(c,d);
    cout << c << " - " << d << endl;
}