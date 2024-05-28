#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {

    vector<int> vec;
    //Syntax
    //For Vector
    sort(vec.begin(), vec.end());

    //For Non Vector
    sort(a,a+n);
    //sort(a,a+n) a is first position (Starting Iterator) 
    //a+n is last itrator

    //Example a= {1,5,3,2}
    //sort(a,a+4)  so it will from 1 to 0+4 = 4 , 4 index is right of last index 
    // this is called as last itrator
    //{1.2.3.5}

    //Sorting in Descending
    sort(a, a+n, greater<int>);
    //starting itartor, last iterator, comparator(it automatically sort in the descendign order)

    // Sorting in Different Ways

    //Example
    pair<int,int> a[] = {{1,2},{2,1},{4,1}};
    //Question Statement
    //sort it according to second element of each 
    //if second element is same,then sort
    //it according to first element but in decending

    //solution
    sort(a, a+n, comp); //{ {4,1},{2,1},{1,2} }
    //comp is boolean function used
    //user can create through its logic which help to sort
    //according to the question needs


    //__builtin_popcount
    //another function built in popcount it uses to count only bits

    int num= 7;
    int count = __builtin_popcount();
    //this function or method helps to find the set of bits
    //so for 7 the bit representation is 000 so set of bits is 3
    
    int num= 6;
    int count = __builtin_popcount();
    //6  =  110 so set of bits are 2
    
    //if the number is long 
    int num= 613564564564564564;
    int count = __builtin_popcountll();  //we use builtin_popcountll that is long long


    //next_permutation
    string  s = "123";

    do{
        cout << s << endl; // here at first it print 123
    } while(next_permutation(s.begin(),s.end()));
    //but when it comes to while condition 
    //it change the 123 postion like 321 or 213 or 132
    //or 231 or 312
    //123 have 6 permutation as it 3!
    // next_permutation(s.begin(),s.end()) using this in loop
    //it gives values till 6 th time after that it goes to false
    //and loop will be stop

    int maxi = *max_element(a,a+n);
    //it give the greatest element in array

    int man = *man_element(a,a+n);
    //it give the smallest element in array

    return 0;


}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true; 
    if(p1.second > p2.second) return false;

    //if p1.second and p2.second is equal then we directly 
    //sort the first element because upper two condition already check
    //if these are passes then it automatically know that
    //both are same, so we do:

    if(p1.first > p2.first) return true;
    return false ; //this else if any condition does passes
    //by this function it help to sort and swap the value

}