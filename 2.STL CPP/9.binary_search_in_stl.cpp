#include <iostream>
#include <algorithm> // For binary_search, lower_bound, upper_bound
#include <vector> // For using vector in some examples

using namespace std;

//Binary Search is an efficient algorithm for searching elements in a sorted array.

//Lower Bound and Upper Bound functions in C++ STL are useful for finding the position of elements in a sorted range.


int main() { 
        //1. Check if X exists in the sorted array or not?    
        int A[] = {1, 4, 5, 8, 9};
        int n = sizeof(A) / sizeof(A[0]); // Size of the array

        bool res = binary_search(A, A + n, 3);  
        //return false
        // 3 is the element we are looking for in the array
        //a means it points on the first iterator that is on the first element 
        //a+n means the iterator point on the ending postion that is  on the after last element

        bool res = binary_search(a, a+n, 3); 
        //return true or res = true;
//here rather than writing such big code just use this stl and got the answer


        //Now lower_bound function: 
//it acts similarly to binary search
//Lower bound ideally returns an iterator

        int A[] = {1, 4, 5, 6, 9, 9};

        int ind = lower_bound(A, A + n, 4) - A;
        // lower bound returns the itrerator i.e, (a,a+n,4) help to gets the iterator 
//but for getting a index we do -a so that it can return the index of finded value
// answer is 1 becausee 4 occurs at the 1st index
//lower_bound(a, a+n, 4) point where the 4 occur,it will return the iterator poiting to this postion


        ind = lower_bound(A, A + n, 7) - A;
        // answer is 4 becuase 7 is not there so we find nexy greastest element which is 9
//so the index answer is 4
//lower_bound(a, a+n, 7) it checks 7 which is not in array so it will point next greater element of 7 which is 9

        ind = lower_bound(A, A + n, 10) - A;
        //so this return index is 6 becase last is 9 which at 5 index but 10 is greater than 9 so it will be go to next iterator which is 6th
//lower_bound(a, a+n, 10) it check and out 10 is not there so it will point immediate right to the greatest one so it will point after the last element cause last element is 9


        //a+n points to the last element, it will be it points to after the last element, also the function takes range [Start, end). which means takes the starting element, and excludes the last element.


        //the end pointer points to the element after the last element, like a.end() will point to the element after the last element.. also a + n will point to the nth element (which doesn't actually exist, it's a theoretical end position).. the pointers point like [start, end).



        int ind = lower_bound(a.begin(), a.end(), x) - a.begin();

        //Uppar Bound Function

        int B[] = {1, 4, 5, 6, 9, 9};


        ind = upper_bound(B, B + n, 4) - B;
        //here is a thing if its found the element it show iterator on next greatest element
//so it will iterate on 5 that is 2nd index (0,1,2...)

        ind = upper_bound(B, B + n, 7) - B;
        // but in 7 it will do same as binary search that that is 
//it doesnot there since 6 and 9 there
//so it will iterate on 9 which is at index of 4

        ind = upper_bound(B, B + n, 10) - B;
        //it will iterator after the last element which 9
// the index should be 6

        //Syntax
        int ind = upper_bound(a.begin(), a.end(), x) - a.begin();

        // Both Lower Bound and Upper Bound work in O(log n) time complexity



        //If You want to find first occurenece in sorted array
//use lower bound
//because it always gives the first occruence

        /*
Find The first occurenece of a X in a sorted array
If it does not exits, print -1.
*/
        int Q[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};

        ind = lower_bound(Q, Q + n, X) - Q;

        if(ind != n && Q[ind] == X) 
            cout << ind;
        else 
            cout << -1;
        // ind != n ensures the index is within bounds
// and Q[ind] == X checks if the found element is equal to X
//ind ! = n, index is not equal to n, n is total length of an array
// and in this case you can not write a[ind] == X
//a[n] might get error // because we are accessing that index which is not available

        // Examples:
// X = 4  // Output: 1
// X = 2  // Output: -1
// X = 12 // Output: -1





        /*
Find The last occurenece of a X in a sorted array
If it does not exits, print -1.
*/

        int Q[] = {1,4,4,4,4,9,9,10,11};

        ind = upper_bound(Q, Q + n, X) - Q;
        ind--;

        //here ind-- because when upper bound function finds the element
//it goes to next greatest element that's why we decrement it

        if(ind >= 0 && Q[ind] == X) 
            cout << ind;
        else 
            cout << -1;

        // ind >= 0 ensures the index is valid and within the array bounds


        //here ind >=0 because suppose i asking for 1 which is at 0th index
//so upper bound will send it to left itrator for the first elment
//which does exist that why ind >=0 ,index must be greater or equal to zero


        x = 4   //asnswr is 4 because,first its find index 5th which is 9 there then ind-- will send back to 4

        x = 2 //it point to element 4 which is at index 1 but goes back by ind-- but 0th element is not equal to 2
// answer is -1

        x = 0// it goes to left to first element which is out of bound
//so the result is -1 


        /*
Find The smallest number greater than X in a sorted array
If it does not exits, print -1.
*/
        Q[] = {1,4,4,4,4,9,9,10,11};

        ind = upper_bound(Q, Q + n, X) - Q;
        //uper bound to that element which is next greater element than it
//this is what question is asking here

        if(ind < n) 
            cout << Q[ind];
        else 
            cout << -1;

        x = 4 // result 9

        x = 2 //result 4

        x = 1 //result 4

        x = 11 //violates ind < n
//so result is -1

        return 0;
}



