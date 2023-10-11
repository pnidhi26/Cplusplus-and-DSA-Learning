#include <iostream>
using namespace std;

class Node{ 
    public:
        int value;
        Node* next;
        Node* prev;
};

// traverse forward in list 
void printForward(Node* head){
    Node* traverser = head;
    while(traverser!=nullptr){
        cout << traverser->value << endl;
        traverser = traverser->next;
    }
}

// traverse backward in list
void printBackward(Node* tail){
    Node* traverser = tail;
    while(traverser!=nullptr){
        cout << traverser->value << endl;
        traverser = traverser->prev;
    }
}

int main() {
    Node* head;
    Node* tail;

    // creating first node
    Node* node = new Node();
    node->value = 4;
    node->next = nullptr;
    node->prev = nullptr;
    head = node;
    tail = node;

    // adding new node (2nd)
    node = new Node();
    node->value = 5;
    node->next = nullptr;
    node->prev = tail;
    tail->next = node;
    tail = node;

    // adding 3rd node
    node = new Node();
    node->value = 6;
    node->next = nullptr;
    node->prev = tail;
    tail->next = node;
    tail = node;

    printForward(head);
    cin.get();
}