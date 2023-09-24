#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers;

    for(int i=1; i <= 10; i++) {
        numbers.push_back(i);
    }

    // for(int number : numbers) 
    //     cout << number << endl;

    // auto: automatic check which type of data begins and assign the same type to it iterator
    for(auto it = numbers.begin(); it != numbers.end(); it++){
        // cout << it << endl;
        cout << *it << endl; // 1
        cout << &it << endl; // 0x16f383090
        cout << &(*it) << endl; // 0x149e06a30 0x149e06a34 0x149e06a38 ......
    }

    auto it =  numbers.begin();
    cout << *(it + 5); // 6

    cin.get();
}