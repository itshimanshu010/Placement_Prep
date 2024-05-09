//deque is similar to vector and list

#include <iostream>
#include <deque>

using namespace std;

int main() {
    //declaration
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); //{2,4}

    dq.push_front(5); //{5,2,4} 
    dq.emplace_front(3); //{3,5,2,4}

    for (const auto& elem : dq) {
        cout << elem << " ";
    }
    return 0;
    
    //rest functions are
    //begin, end, rbegin, rend, clear, insert, size, swap
}
