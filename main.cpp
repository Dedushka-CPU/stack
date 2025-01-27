#include <iostream>
#include "stack.h"

using std::cout;

int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Last element: " << myStack.top() << '\n';
    cout << "Stack size: " << myStack.size() << '\n';

    myStack.pop();
    cout << "Last element after deleted: " << myStack.top() << '\n';
    cout << "Stack size after deleted: " << myStack.size() << '\n';

    while (!myStack.empty()) {
        cout << "Element: " << myStack.top() << '\n';
        myStack.pop();
    }

    return 0;
}
