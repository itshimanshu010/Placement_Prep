// Map stores key-value pairs in sorted order by keys
//Allow Duplicate values but has unique keys
//Both key and value can be data type 
//Map stores unique key in sorted order
// Generic operations are insert, find, erase
// Every operation is O(log n) due to underlying balanced tree structure

#include<iostream>
#include<map>

using namespace std;

int main(){
    // Declaration

    map<int, int> mp;  // key: int, value: int
    //  key,  value

    map<int, pair<int,int>> mpp; // key: int, value: pair<int, int>
    // key is 1 integer, value is 2 integer

    map< pair<int,int>, int> mpc; // key: pair<int, int>, value: int
    // key is 2 integer and value is 1 integer
    
     // Inserting elements

    mp[1] = 2;  
     //it stores as {1:2} where 1 is key and 2 is value
   
    mp.emplace(3, 1);     
    /* 
        {1 : 2,
         3 : 1} */ 

    mp.insert({2,4}); 
    /* 
        {1 -> 2,
         2 -> 4,   //here it stores key as sorted way
         3 -> 1} */    

    
    mpc[{2,3}] = 10;
    //  map< pair<int,int>, int> mpc; here it stores like
    // {2,3 -> 10}

    //traversing the sorted key map

    for(auto it : mp) {
        cout << it.first << " " << it.second <<endl;
    }
    /* Output
        1 2
        2 4
        3 1

    */

   //Accessing values by key
   cout << mp[1];
   //map of 1 is value 2 

   cout << mp[5];
   //Output: 0 (default value, key 5 is not present)

   // Finding the iterator (address) of a key
   //where key lies the address of it
   auto it = mp.find(3);  // the iterator points to '3' key i.e, {3->1}
   //for accessing this you have to add star
   //for the value
    cout << it->second << endl; 

    //For checking it put into condition
   if (it != mp.end()) { 
        cout << it->second << endl;  // Output: 1
    }

   auto it = mp.find(5);
   //if it is not in the map 
   //it points nothing but after the map that is mp.end()
   if (it == mp.end()) {
        cout << "Key 5 not found." << endl;  // Output: Key 5 not found.
    }

     // Lower Bound and Upper Bound
    it = mp.lower_bound(2);  // Points to the element with key 2
    if (it != mp.end()) {
        cout << "Lower bound for key 2: " << it->first << " -> " << it->second << endl;  // Output: 2 -> 4
    }

    it = mp.upper_bound(3);  // Points to the first element with key greater than 3
    if (it != mp.end()) {
        cout << "Upper bound for key 3: " << it->first << " -> " << it->second << endl;  // Output depends on the keys greater than 3
    }

    // Other common operations
    mp.erase(2);  // Erases the element with key 2
    cout << "Size after erase: " << mp.size() << endl;  // Output: 2

    map<int, int> mp1; 
    map<int, int> mp2; 
    mp1.swap(mp2);  // Swaps the content with mpp (both must have the same type)

    if (mp.empty()) {
        cout << "Map is empty." << endl;
    }

    return 0;


}


void multiMap(){
    //Everything same as map, only it can store multiple or duplicate keys
    // You cannot access elements by mp[key] because it can have multiple values for the same key
    // It also stores elements in sorted order by key
}


void UnorderedMap(){
    
    // It has unique keys but
    // Keys are not stored in any particular order (they are randomized)
    // Average time complexity for operations is O(1)
    // Worst case time complexity is O(N) due to hash collisions
}