#include <iostream>
using namespace std;

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

int main() {
    YouTube yt("SiliconValleyBoy", "Prakash");
    cout << "Name: " << yt.Name << endl;
    cout << "Owner Name: " << yt.OwnerName << endl;
}