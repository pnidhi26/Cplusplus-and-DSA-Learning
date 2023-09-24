#include <iostream>
using namespace std;

int factorial(int num){
    if(num == 1){
        return num;
    }
    return num * factorial(num-1); 

}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " ! is: " << factorial(num) << endl;
}