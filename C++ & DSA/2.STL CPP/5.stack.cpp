// Stack is LIFO (Last In First Out)
// Generic three functions of stack are push, pop, and top
//All the operation are O(1), Everything done on constant time
#include <iostream>
#include <stack>

using namespace std;

int main() {
    //declaration
    stack<int> st;

    st.push(1);    // Stack: {1}
    st.push(2);    // Stack: {2, 1}
    st.push(3);    // Stack: {3, 2, 1}
    st.push(3);    // Stack: {3, 3, 2, 1}
    st.emplace(5); // Stack: {5, 3, 3, 2, 1}

    cout << st.top() << endl; // Prints the top element: {5}

    st.pop(); // Removes the top element
    // Stack: {3, 3, 2, 1}

    cout << st.top() << endl; // Prints the new top element: {3}

    cout << st.size() << endl; // Prints the size of the stack: {4}

    cout << (st.empty() ? "true" : "false") << endl; // Prints false because the stack is not empty


    // Iterating through stack elements is not straightforward because stack does not provide iterators
    // We need to copy the stack and pop elements to print them
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Declaring two stacks for swapping
    stack<int> st1, st2;
    st1.push(10); // Stack st1: {10}
    st1.push(20); // Stack st1: {20, 10}
    st2.push(30); // Stack st2: {30}
    st2.push(40); // Stack st2: {40, 30}

    // Swapping the contents of st1 and st2
    st1.swap(st2); // Now st1: {40, 30}, st2: {20, 10}

    // Printing the top elements after swapping
    cout << "Top of st1: " << st1.top() << endl; // Should print 40
    cout << "Top of st2: " << st2.top() << endl; // Should print 20


    return 0;
    
}