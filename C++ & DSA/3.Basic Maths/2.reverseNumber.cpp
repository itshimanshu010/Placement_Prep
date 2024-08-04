//https://www.naukri.com/code360/problems/reverse-number_893271

//TC O(log10(n))
//123 : 321 or 1400 : 41

#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	//type your code here
	long long int revNum = 0;

	while(n>0){
		long long int lastDig = n%10;
		revNum = (revNum * 10) + lastDig;
		n = n/10;

	}
	return revNum;
}
