//https://www.naukri.com/code360/problems/check-armstrong_589

//1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634
//371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
//TC O((log10(n))^2)
bool checkArmstrong(int n){
	//Write your code here
	int temp = n;
	
	int sum = 0;
	int count = (int)(log10(n) + 1);

	while(n>0){
		int lastD = n%10;
		sum= sum + pow(lastD,count);
		n=n/10;
	}

	if(sum==temp){
		return true;
	}
	else{
		return false;
	}

}
