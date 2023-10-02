#include <iostream>
using namespace std;

// class Node for value and next ptr
class Node {
    public:
        int value;
        Node* Next;
};


// print linked list elements
void printList(Node* ptr){
    while (ptr!=NULL) {
        cout << ptr->value << endl;
        ptr = ptr->Next;
    }
}


// Insert a node at head/front
void insertAtFront(Node** head, int newValue) {
    
    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;

    // Put it in front of current head
    newNode->Next = *head;

    // Move head of the list to print to the newNode
    *head = newNode;
}


// insert a node at end/tail
void insertAtEnd(Node** head, int newValue) {

    // Create a new node
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->Next = NULL;

    // if Linked list is empty, newNode will be a head node
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    // find the last node
    Node* last = *head;
    while(last->Next!=NULL) {
        last = last->Next;
    }
    
    // Insert newNode after last node (at the end)
    last->Next = newNode;
}


// insert a node at a location or specific node
void insertAfter(Node*prev, int newValue) {

    // check if the previous node is null
    if(prev == NULL){
        cout << "previous can not be null";
        return;
    }

    // create a node
    Node* newNode = new Node();
    newNode->value = newValue;

    // insert newNode after previous
    newNode->Next = prev->Next;
    prev->Next = newNode;
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

    // insertAtFront(&head, 5);
    insertAfter(second, 14);
    // insertAtEnd(&head, 80);

    printList(head);
}