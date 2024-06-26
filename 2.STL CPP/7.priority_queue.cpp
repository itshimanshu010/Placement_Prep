// The element which has the largest value stays at the top
// Generic operations are push, top, pop
// Push operation is O(log n), top operation is O(1), pop operation is O(log n)
#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Declaration
    priority_queue<int> pq;  // This is also known as a max heap

    pq.push(5);    // {5}
    pq.push(2);    // {5, 2}
    pq.push(8);    // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}
    pq.emplace(3);  // {10, 8, 5, 3, 2} stored as priority

    cout << pq.top() << endl; // Prints 10, the largest element

    pq.pop(); // Removes the top element (10)
    // {8, 5, 3, 2}

    cout << pq.top() << endl; // Prints 8, the new largest element

    // Minimum heap or min heap
    // This will prioritize the smallest element to the top
    // Syntax to declare
    priority_queue<int, vector<int>, greater<int>> min_pq;

    min_pq.push(5);    // {5}
    min_pq.push(2);    // {2, 5}
    min_pq.push(8);    // {2, 5, 8}
    min_pq.emplace(10); // {2, 5, 8, 10}

    cout << min_pq.top() << endl; // Prints 2, the smallest element

    return 0;
}
