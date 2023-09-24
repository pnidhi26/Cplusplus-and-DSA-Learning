#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));

    for (auto pair : myDictionary)
        cout << pair.first << " - " << pair.second << endl;
}