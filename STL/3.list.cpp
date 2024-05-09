//List is similar to vector
//List gives front operations too
//This container is also dynamic in nature
#include <iostream>
#include <list>

using namespace std;

int main(){

     // Declaration of a list container
    list<int> ls;

    // Inserting elements at the back of the list
    ls.push_back(2); // {2}
    ls.emplace_back(4); //{2,4}

    // Inserting elements at the front of the list
    ls.push_front(5); //{5,2,4} // very cheap in terms of time complexity
    //directly push front to front but in vector we have to use insert function for this which is much costiler
    //in list, since the internal operation of list is doubly linked list
    //doubly linked list is maintained for a list
    //but for a vector singly linked list is maintained

     // Inserting elements at the front of the list
    ls.emplace_front(3);  //{3,5,2,4}

    // Output the contents of the list
    cout << "Contents of the list: ";
    for (const auto& elem : ls) {
        cout << elem << " ";
    }

    // Other functions that can be used with lists:
    // begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}
