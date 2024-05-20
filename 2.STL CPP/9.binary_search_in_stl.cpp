//Binary Search is an efficient algorithm for searching elements in a sorted array.

//Lower Bound and Upper Bound functions in C++ STL are useful for finding the position of elements in a sorted range.

//1. Check if X exists in the sorted array or not?

A[] = {1,4,5,8,9}

bool res = binary_search(a, a+n, 3);  
//return false
// 3 is the finding element in the array
//a means it points on the first iterator that is on the first element 
//a+n means the iterator point on the ending postion that is  on the after last element

bool res = binary_search(a, a+n, 3); //return true or res = true;
//here rather than writing such big code just use this stl and got the answer


//Now lower_bound function: 
//it also acts similarly to binary search
//lower bound ideally return the iterator

a[] = {1,4,5,6,9,9}

int ind = lower_bound(a, a+n, 4) - a;
//lower_bound(a, a+n, 4) point where the 4 occur,it will return the iterator poiting to this postion


int ind = lower_bound(a, a+n, 7) - a;
//lower_bound(a, a+n, 7) it checks 7 which is not in array so it will point next greater element of 7 which is 9

int ind = lower_bound(a, a+n, 10) - a;
//lower_bound(a, a+n, 10) it check and out 10 is not there so it will point immediate right to the greatest one so it will point after the last element cause last element is 9


//a+n points to the last element, it will be it points to after the last element, also the function takes range [Start, end). which means takes the starting element, and excludes the last element.


//the end pointer points to the element after the last element, like a.end() will point to the element after the last element.. also a + n will point to the nth element (which doesn't actually exist, it's a theoretical end position).. the pointers point like [start, end).