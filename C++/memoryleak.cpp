#include <iostream>
using namespace std;

void myFunction(){
    // Allocation of dynamic memory
    int* ptr = new int[5]; // Array allocation
    ptr[2] = 10;
    cout << "Hi, I am = " << ptr[2];

    int* num = new char('testing'); // char allocation

    Person* obj = new Person("name", 23); // object allocation

    // Deallocation of the memory
    delete [] ptr;
    delete num;
    delete obj;

}

int main() {
    myFunction();
    int* insideMain = new int(4);
    delete insideMain;
    return 0;
}