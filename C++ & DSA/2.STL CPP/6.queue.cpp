// Queue is FIFO (First In First Out)
// All the operations are O(1), everything is done in constant time
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Declaration
    queue<int> q;

    q.push(1);    // Queue: {1}
    q.push(2);    // Queue: {1, 2}
    q.emplace(4); // Queue: {1, 2, 4}

    // Adding 5 to the last element (4) in the queue
    q.back() += 5;  // Now the queue is: {1, 2, 9}

    cout << q.back() << endl; // Prints the element at the back: {9}

    cout << q.front() << endl; // Prints the element at the front: {1}

    q.pop(); // Pops the front element (1)
    // Queue: {2, 9}

    cout << q.front() << endl; // Prints the new front element: {2}

    return 0;
}
