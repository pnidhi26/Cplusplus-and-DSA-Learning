#include <iostream>
using namespace std;

int main() {
    int luckyNumbers[5] = {2,3,5,7,9};
    cout << luckyNumbers << endl;    // 0x16b1730b0
    cout << &luckyNumbers << endl;    // 0x16b1730b0
    cout << &luckyNumbers[0] << endl;   // 0x16b1730b0
    cout << luckyNumbers[2] << endl;   // 5
    cout << *(luckyNumbers + 2) << endl;  // 5

    return 0;
}