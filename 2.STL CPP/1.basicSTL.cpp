#include<bits/stdc++.h> //this library includes all other library
#include <utility>

using namespace std; //it helps to not call std everytime 


//There are two types of function 
//i - void (it will not return anything) ii - return type function example - int

//void function 
void print()
 {
    cout << "himanshu";
 }
 

//return type function like int, double etc
 int sum(int a , int b)
 {
    return a + b;
 }
 

int main(){
    int a;

    //example without use namespace
    std::cin >> a;
    std::cout << a; 
    //here we have to use std everytime when we dont use namespace std;

    //Example of usin namespace std
    cin >> a;
    cout << a;
    //here we dont use std everytime


    //Now STL 
    // Example of STL parts: Algorithm, Containers, Functions, and Iterators
   
    return 0;

}

//Pair: it is part of utility library, it is used to pair data with data type.
void explainPair(){
    pair<int, int> p ={1,3};
    // Accessing the first and second elements of the pair
    cout << p.first << " " <<p.second;

    //Storing 3 to more variable using nested
    pair<int, pair<int,int>> p = {1, {3,4}};
    cout << p.first << " " <<p.second.first  << " " <<p.second.second; 

    //Declaring array into pair
    pair<int,int>arr[]={{1,2}, {3,5},{4,5}};

    // Accessing the second element of the second pair in the array
    cout << arr[1].second; // 5
 
}
