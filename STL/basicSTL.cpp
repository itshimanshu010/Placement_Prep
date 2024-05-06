#include<bits/stdc++.h> //this library includes all other library

using namespace std; //it helps to not call std everytime 


//function 1-void (it will not return anything) 2 - return type function example - int
 void print()
 {
    cout << "himanshu";
 }
 //void function

 int sum(int a , int b)
 {
    return a +b;
 }
 //return type function like int, double etc

int main(){
    int a;

    //example without use namespace
    std::cin >> a;
    std::cout << a; 
    //here we have to use stde everytime when we dont use namespace std;

    //example with use namespace
    cin >> a;
    cout << a;
    //here we dont use std everytime


    //Now STL 
    //It is divided into 4 parts : ALgorithm,Containers, Function,Iterators


}

//pairs: it is part of utility library, it is used to pair of data in data type

void explainPair(){
    pair<int, int> p ={1,3};
    // for accessing 
    cout << p.first << " " <<p.second;

    //storing 3 to more variable using nested

    pair<int, pair<int,int>> p = {1, {3,4}};

    cout << p.first << " " <<p.second.first  << " " <<p.second.second; 

    //declaring array into pair
    
    pair<int,int>arr[]={{1,2}, {3,5},{4,5}};

    cout << arr[1].second; // 5
}
