#include <iostream>
using namespace std;

bool isPrimeNumber (int number) {
    for(int i=2; i < number; i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "number: ";
    cin >> num;

    bool isPrimeNum = isPrimeNumber(num);

    if (isPrimeNum){
        cout << "Prime number" << endl;
    } else {
        cout << "Not prime number" << endl;
    }
}