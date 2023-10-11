#include <iostream>
#include <stack>
using namespace std;

// remove element from top 
void printStackElements(stack<int> stack){
    while (!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main() {
    // empty, size, push, pop, top
    stack<int> numberStack;

    // push elements in stack
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);

    //**** remove element from top of the stack
    numberStack.pop();

    // **** checking if stack is empty or not
    // if(numberStack.empty())
    //     cout << "Stack is empty." << endl;
    // else 
    //     cout << "Stack is not empty." << endl;
    
    printStackElements(numberStack);

    // checking stack size
    cout << "Stack size is: " << numberStack.size() << endl;

}       