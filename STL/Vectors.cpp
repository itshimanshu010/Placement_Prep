#include<bits/stdc++.h> 
using namespace std;

int main(){

    //storing array
    int arr[5] = {1,5,3,4,2};

    //for dynamic array where no need to tell size
    //We use Vector Container store value like array does

    vector<int> v; //empty contaiber created

    //Pushback function
    v.push_back(1);  // 1 will be go into the v

    //Emplaceback (Similar to pushback) dynamically increases the size and push into the bacl
    //faster than push back
     v.emplace_back(2);

     //vector of pair data type
     vector<pair<int,int>>vec;

    //storing data in pair vector
    vec.push_back({1,2}); // here we need curly braces but in emplace we dont 

    vec.emplace_back(1,2); // it automatically understand that it is for pair vector

    // declare with multiple value

    vector<int> v(5,100);
    //{100,100,100,100,100} size of container 5, with elements 100

     vector<int> v(5);
     //{0,0,0,0,0} or {garbage value,...,...} depends upon compiler

     vector<int> v1(5,20);
     //{20,20,20,20,20} 
    
    //cop one vector into another vector
    vector<int> v2(v1);
    //similar but the copy of v1, v2={20,20,20,20,20}

    
    //Accessing elements in vector
    //v = {20,10,50,60,70}
    //v[1]=10,v[2]=50 same as array
    //or another way =  v.at(0);

    // other way == iterator////
    //it points to memory address
    //v = {1,2,3,8,6}
    //syntax  
    vector<int>::iterator it = v.begin();
    //vector then datatype then double coloan then iterator then ('it' you can named whatever like 'bit'site' etc)
    

}
