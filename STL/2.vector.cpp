#include <iostream>
#include <vector>

using namespace std;

int main(){

     // Storing array
    int arr[5] = {1,5,3,4,2};


    // For dynamic array where no need to specify size
    //we use Vector Container to store values like an array does
    vector<int> v; // Empty container created
    
    //Pushback function
    v.push_back(1);  // 1 will be added to the vector

    //Emplaceback (Similar to pushback) dynamically increases the size and pushes into the back
    //faster than push_back
    v.emplace_back(2);

     //vector of pair data type
     vector<pair<int,int>>vec;

    //storing data in pair vector
    vec.push_back({1,2}); // // Curly braces needed for initialization here but not in emplace

    vec.emplace_back(1,2);  // It automatically understands that it is for a pair vector

    
    // Declare with multiple value
    vector<int> v(5,100);
    //{100,100,100,100,100} size of container 5, with elements 100

    vector<int> v(5);
    //{0,0,0,0,0} or {garbage value,...,...} depends upon compiler

    vector<int> v1(5,20);
    //{20,20,20,20,20} 
    
    //copy one vector into another vector
    vector<int> v2(v1);
    //similar but the copy of v1, v2={20,20,20,20,20}

    
    //Accessing elements in vector
    //v = {20,10,50,60,70}
    //v[1]=10,v[2]=50 same as array
    //or another way =  v.at(0);
    cout << v[0] << " " << v.at(0); // Same as array: v[0]=20, v.at(0)=20

    // other way is " iterator "
    // Iterators are used to point at memory addresses
    
    

    //v = {20,10,40,60,50}
    // inside the v,all are the contiguous memory locations
    
    //syntax of iterator
    vector<int>::iterator it = v.begin();
    
    //in words vector then datatype then double colon then iterator then ('it' you can named whatever like 'bit','site'. etc)
    //Iterators are used to point at the memory addresses
    //v.begin mean it point to memory that is 20 i.e, Iterator pointing to the beginning of the vector
 

    cout << *(it) << " "; // * => in c++ to access anyting from or in the memory we use *
    // Dereferencing the iterator to get the value at that memory address
    // output of *(it) is 20


    // *(v.begin()) => 20    
    
    it++;  // Moving the iterator to the next element
    cout << *(it) << " "; // begin goes to 10 (next memory address)
    

    it = it + 2; // Moving the iterator to the second element from the current position
    cout << *(it) << " "; // begin goes to 60 (next memory address)


    vector<int>::iterator it = v.end(); // point after the 50 that is right after the 50 which is last element 
    //i.e v.end will not point to 50 but after the 50
    // and for 50 you have to to do it-- so that 'it' will iterate on 50
    
    vector<int>::iterator it = v.rend(); // reverse end means reversing the element i.e {20,10,40,60,50} to {50,60,40,10,20}
    //right after end
    
    vector<int>::iterator it = v.rbegin(); // iterator pointer is on right after the end
    // if rbegin() iterate on {20,10,40,60,50} which mean it will after 50
    //but after when we do it++, the pointer move to 60


    //how to print 
    cout < v[0] < " " < v.at(0);
    //two to print v[0] or v.at(0)

    //  v.back() ->used to fetch the last element of a vector container.
    cout << v.back() << " "; //50

    printing the vector
    // by the use of for loop from 0 to n
    
    // other way
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " "; //20,10,40,60,50
    }

    //other way which shortcut
    
    //use auto
    //auto= (auto assignation) it automatically define assign into vector iterator, and interger datatype
    // auto it = 5 it understand it is integer, it = "str" it understand it is string
    for(auto it = v.begin(); it != v.end();i++){
        cout << *(it) << " ";
    }


    //other way by using foreach loop
    for(auto it : v){ // auto it : v mean auto it on v
                cout << *(it) << " ";
    }
    
    // Other way using auto and foreach loop
    for (auto element : v) {
        cout << element << " "; // Prints each element in the vector
    }

    //deletion in vector
    v.erase()

   // v.erase(iterator-location of the address)

   // example {20,10,40,60,50}
    v.erase(v.begin() + 1); // Erase element at index i.e, point towards 10 , output {20,40,60,50}

    //now deleting multiple consecutive element between the iterators also start point of iterator will delete but not last point  [...)
    //.erase(st point,end point)
    // example {20,10,40,60,50}
    v.erase(v.begin() + 2, v.begin() + 4); //// Erase elements from index 2 to 4 (exclusive)
    //point towards 40 and 50, so starting point 40 and 60 will remove and end point 50 will not, output {20,10,50}  


    //Insert Function

    vector<int>v(2,100); // it create {100,100}
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin() + 1 ,200);  // {300,200,100,100}

    //inserting multiple elements
    //begin() + 1 postion,2 num of elements, what's  that elemet 5
    
    v.insert(v.begin() + 1 ,2,10); //{300,10,10,100,100}

    //copying and pasting one vector to another vector

    vector<int> copy(2,50); // vector named copy which i want to copying or insert in v
    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

    //Length or size of the vector size() //{10,20,30}
    v.size(); // 3

    //deleting (popping) last element of the vector
    v.pop_back(); //{10,20}

    //vector swapping
    //v1-> {10,20} v2-> {30,40}
    v1.swap(v2); // v1->{30,40},v2->{10,20}

    //erasing entire vector  {10,20,30}
    v.clear(); // {}

    //{1} ->not empty  {}-> empty
    v.empty();
    

}
