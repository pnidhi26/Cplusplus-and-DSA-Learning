#include <iostream>
using namespace std;

/*
 - Child class can access all the methods from the parents class
 - Parents class can not access any method from child class.
*/


// base class (Parent class)
class YouTube {
    // all methods will be in private
    private:
        string Name;
        string OwnerName;
        int Subscriber;
    
    public:
        // creating Constructor here ....
        YouTube(string name, string ownerName) {
            Name = name;
            OwnerName = ownerName;
            Subscriber = 0;
        }
        void Subscribe(){
            Subscriber++;
        }
};

// Inheriting YouTube class in this CookingYouTube class as derived class
class CookingYouTube:public YouTube {
    public:
        CookingYouTube(string name, string ownerName):
            YouTube(name, ownerName) {
        }
        
    // can't access this practice method in parent class
    void practice() {
        cout << OwnerName << "is practice cooking." << endl;
    }
};

int main() {
    YouTube yt("SiliconValleyBoy", "Prakash");
    cout << "Name: " << yt.Name << endl;
    cout << "Owner Name: " << yt.OwnerName << endl;

    CookingYouTube yt("PNV's Kitchen", "PNV");
    YouTube.Subscribe();
}