#include <iostream>
using namespace std;

// same type of data types can be store in similar array type
int main() {
    float monthArray[6]; //= {100, 220, 300, 0, 200};
                  // index  0    1     2   3   4    5
    
    // cout << "Enter value: ";
    // cin >> monthArray[5];

    float total = 0;
    // taking array as input
    for(int i=0; i<6; i++){
        cout << "enter amount for month " << i+1 << ":"<< endl;
        cin >> monthArray[i];
        total+=monthArray[i]; // add all elements
    }

    cout << total << endl;
}