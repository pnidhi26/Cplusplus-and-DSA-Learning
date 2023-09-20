
#include <iostream>
using namespace std;

int main() {
    // The factorial of a number
    // 6! = 1*2*3*4*5*6 = 720

    int num;
    cout << "Number: ";
    cin >> num;
    int factorial = 1;

    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    //for(int i = num; i >= 1; i--){
    //   factorial = factorial * i;
    //}
    
    cout << num << "!=" << factorial;
}