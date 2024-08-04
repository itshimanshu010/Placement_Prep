// Set stores elements in sorted order and ensures uniqueness
// Generic operations include insert, find, erase
// Every operation is O(log n)
#include <iostream>
#include <set>

using namespace std;

int main() {
    // Declaration
    set<int>st;  
    st.insert(1);    // {1}
    st.emplace(2); // {1,2}
    st.insert(2); //Here it will not store it because it store only unique
    //{1,2} (duplicate, will not be added)
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4} it stores while sorting it 
    //Everything will stored in sorted 
    // It is not a linear container; it is typically implemented as a balanced binary search tree

    //`emplace` and `insert` work similarly

    //Functions

    //{1,2,3,4,5}
    auto it = st.find(3);
    //returns iterator pointing to 3
    //If the element is found, the iterator points to the element
    //points to the address

     //{1,2,3,4,5}
    it = st.find(6); //The element 6 is not there
    // so it always return set.end()
    //the iterator which points to right after the end.
    //{1,2,4,5} = find(3). then it also iterate after the 5

    //{1,2,3,4,5}
    st.erase(5); //Simply delete 5 and maintaining the sorted order

    int cnt = st.count(1);
      // If the element exists, `count` returns 1, otherwise it returns 0
    // Since set only contains unique elements, count can only be 0 or 1

    //{1,2,3,4,5}
    auto it = st.find(3);
    st.erase(it);  ////{1,2,4,5} it takes constant time

    //Everything happen in Logarithm Time Complexity
    //O(log N)

    //{1,2,3,4,5}
    auto it1 = st.find(3);
    auto it2 = st.find(5);
    st.erase(it1,it2); 
    // Erases elements in the range [it1, it2)
    //after erase  (1,2,5)  [first, last )
    //lower bound amd upper bound function works same way
    //as in vector it does.

     // Lower bound and upper bound functions
    st = {1, 2, 3, 4, 5};
    auto lb = st.lower_bound(2);
    // Returns an iterator pointing to the first element that is not less than 2
    auto ub = st.upper_bound(3);
    // Returns an iterator pointing to the first element that is greater than 3


    return 0;
}


void MultiSet() {
    // Multiset obeys sorted order but allows duplicates

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);  // {1,1}
    ms.insert(1);  //{1,1,1}

    ms.erase(1); //all 1's erased, it erase every 1
    //simply it erases all the same element

    int cnt = ms.count(1); 
    //it will count no. of 1s in multi set
    
    // for deleting only one occurence of 1 that is single one will delete 
   
    ms.erase(ms.find(1)); 
    //first find out first occurence of 1 = ms.find(1)
    //here it erases the address of first occurence of that element

    ms.erase(ms.find(1), ms.find(1) + 2);
    //find 1 and go till 2 that 0,1,2
    // and erase like [0,1,2) so it will delete 0th and 1st element



}


void unOrderedSet(){
    //It stores unique but not in ordered

    unordered set<int> st;
    // all function and operation works except lower bound and upper bound
    //TC = O(1)
    //But in worst case TC O(N) Goes in linear time
    
}