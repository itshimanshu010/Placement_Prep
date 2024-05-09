//List is similar to vector
//List gives front operations too
//This container is also dynamic in nature
#include<bits/stdc++.h> 
using namespace std;

int main(){

    //decalartion
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4} // very cheap in term of time complexity
    //directly push front to front but in vector we have to use insert function for this which is much costiler
    //in list, since the internal operation of list is doubly linked list
    //doubly linked list is maintained for a list
    //but for a vector singly linked list is maintained

    ls.emplace_front();  //{2,4}

    //rest functions are
    //begin,end,rebegin,rend,clear,insert,size,swap

}
