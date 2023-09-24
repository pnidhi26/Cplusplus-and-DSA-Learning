#include <iostream>
using namespace std;
#include <list>

class YouTube {
    // by default all attributes will be Private so for accessing them into main we have to make it public
    public:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideoTitles;
};

int main() {
    YouTube yt;
    yt.Name = "SiliconValleyBoy";
    yt.OwnerName = "Prakash";
    yt.SubscriberCount = 1000;
    yt.PublishedVideoTitles = {"Vlog 01", "Vlog 02", "Vlog 3"};

    cout << "Name: " << yt.Name << endl;
    cout << "Owner Name: " << yt.OwnerName << endl;
    cout << "Subscribers: " << yt.SubscriberCount << endl;
    for(string videoTitle : yt.PublishedVideoTitles){
        cout << videoTitle << endl;
    }
}