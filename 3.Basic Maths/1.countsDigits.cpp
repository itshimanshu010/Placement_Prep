//https://www.naukri.com/code360/problems/number-of-digits_4538242?leftPanelTabValue=PROBLEM
//142 = 3 or 1000 : 4
//Note: If the no. of iteration is based on division, TC will be Logarithmic

#include <bits/stdc++.h>


// Time Complexity: O(log10(x)) because we divide the number by 10 in each iteration

int countDigit(long long x) {
    // Write your code here.
    int count = 0;

    while(x > 0){
        count++;
        x = x/10;
    }

    return count;
}


//Other Way

int counTDigit(long long x) {
    // Write your code here.
    int count = (int)(log10(x) + 1);

    return count;

}