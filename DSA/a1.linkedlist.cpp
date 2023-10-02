#include <iostream>
using namespace std;

// class Node for value and next ptr
class Node {
    public:
        int value;
        Node* Next;
};

// print a linked list elements
void printList(Node* ptr){
    while (ptr!=NULL) {
        cout << ptr->value << endl;
        ptr = ptr->Next;
    }
}

int main() {
    // creating dynamic arrays for 3 nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 10;     // initialized value to node
    head->Next = second;  // link the nodes
    second->value = 20;
    second->Next = third;
    third->value = 30;
    third->Next = NULL; // nullptr

    printList(head);
    
}