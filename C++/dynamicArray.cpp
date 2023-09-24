#include <iostream>
using namespace std;

// "new" : allocation
// "delete" : deallocation

int main () {
    int size;
    cout << "Size:";
    cin >> size;
    // int myArray[size];

    int *myArray = new int[size]; // allocation of a memory
    
    // deallocation of a memory
    delete[] myArray;
    myArray = NULL;

    // pointer to a pointer
    int** doublePointer = new myArray;

    // it means [1] element in myArray and [2] element in *myArray (size)
    doublePointer[1][2] = 88

}