//https://www.naukri.com/code360/problems/palindrome-number_624662
//TC O(log10(n))
//1331:1331 or 141:141 or 1,2,3..9  but  not 123.. etc
bool palindrome(int n)
{
    // Write your code here
    int temp = n;
    int revNum = 0;

    while(n>0){
        int lastDig = n%10;
        revNum = (revNum * 10) +lastDig;
        n=n/10;
    }

    if(temp == revNum){
        return true;
    }
    else{
        return false;
    }
}