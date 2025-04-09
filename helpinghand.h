#include <math.h>
//ARMSTRONG
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = 0;
    int temp = num;

    // Count the number of digits
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    // Calculate the sum of the nth powers of its digits
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, n);
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    return (sum == originalNum);
}
// PALINDROME
int ispalindrome(int p){
	int rem,temp,rev=0;
	temp=p;
	while (temp!=0)
	{
		rem=temp%10;
		rev=(rev*10)+rem;
		temp/=10;
	}
	return(rev==p);
	
}
//FACTORIAL
void factorial(int f){
	int factorial=1;
   for (int i=f;i>0 ; i--){
       factorial*=i;
   }
   
   printf("Factorial of %d is %lld\n", f, factorial);
}
//LEAP YEAR 
int isleapyear(int l) {
    if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0)) {
        return 1;
    }
    return 0;
}