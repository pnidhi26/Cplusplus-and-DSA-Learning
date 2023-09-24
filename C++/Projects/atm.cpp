#include <iostream>
using namespace std;

void showMenu() {
    cout << "****************** MENU ****************" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "------------------------------------" << endl;
}

int main() {
    int option;
    double balance = 500;
    do {
        showMenu();
        cout << "Select Option: ";
        cin >> option;
        switch(option){
            case 1:
                cout << "Your balance is:" << balance << "$" << endl;
                break;
            case 2: 
                cout << "Deposit amount: ";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Your money is deposited successfully. Your total balance is: " << balance << "$" << endl; 
                break;
            case 3: 
                cout << "Withdraw amount: ";
                double withdrawAmount;
                cin >> withdrawAmount;
                if(withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                }
                else {
                    cout << "not enough money!!";
                }
                break;
            default:
                cout << "Enter valid option" << endl;
        }
    } while (option!=4);
}