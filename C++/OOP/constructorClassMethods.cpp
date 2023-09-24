#include <iostream>
using namespace std;
/*
Rules: 
    1. Constructor has the same name as class 
    2. Constructor don't return anything
*/

class YouTube {
    public:
        string Name;
        string OwnerName;
    
    // creating Constructor here ....
    YouTube(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
    }
};

int main() {
    YouTube yt("SiliconValleyBoy", "Prakash");
    cout << "Name: " << yt.Name << endl;
    cout << "Owner Name: " << yt.OwnerName << endl;

    YouTube yt2("Vlog by PNV", "Nidhi");
    cout << "Name: " << yt2.Name << endl;
    cout << "Owner Name: " << yt2.OwnerName << endl;

/*
    YouTube yt2;
    yt2.Name = "Vlog by PNV";
    yt2.OwnerName = "Nidhi";
    cout << "Name: " << yt2.Name << endl;
    cout << "Owner Name: " << yt2.OwnerName << endl;
*/

}