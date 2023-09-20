#include <iostream>
using namespace std;
int main() {
    float weight, height, bmi;
    cout << "Enter your Weight in (Kgs): ";
    cin >> weight;
    cout << "Enter your height in (meters): ";
    cin >> height;
    bmi = weight / (height * height);
    if(bmi < 18.5){
        cout << "You are UnderWeight :(" << endl;
    }
    else if( bmi > 25) {
        cout << "Oops, You are OverWeight :(" << endl;
    }
    else {
        cout << "Hooray, you have Normal weight!" << endl;
    }
    cout << "Your BMI is: " << bmi << endl;
}