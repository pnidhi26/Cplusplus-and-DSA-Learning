#include <iostream>
using namespace std;

// Void pointers hold any type of data types but we can not dereference it. 
void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void print(void*ptr, char type){
    switch(type){
        case 'i': cout << *((int*)ptr) << endl; break;
        case 'c': cout << *((char*)ptr) << endl; break;
    }
}

int main() {
    int num=5;
    char letter = 'a';
    printNumber(&num)
    print(&n,'i');
    print(&letter,'c');

    return 0;
}