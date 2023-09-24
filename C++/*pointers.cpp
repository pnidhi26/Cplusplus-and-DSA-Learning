#include <iostream>
using namespace std;

// pointer will assign to only same type of variables
// pointer can not be created without any address value.

int main() {
    int n=5;

    cout << n << endl;  // 5
    cout << &n << endl; // 0x16d65b0c8

    // creates a pointer which will hold address if n variable
    int* ptr = &n;
    cout << ptr << endl; // 0x16d7cf0c8

    // dereference a pointer
    cout << *ptr << endl; // 5

    *ptr = 10;
    cout << ptr << endl; // 0x16cf7b0c8
    cout << *ptr << endl; // 10
    cout << n << endl; // 10

    return 0;
}