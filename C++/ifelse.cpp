#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    if(num % 2 == 0) {
        cout << "This is a Even number." << endl;
    }
    else {
        cout << "This is an Odd number." << endl;
    }
}