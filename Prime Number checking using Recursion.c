#include<stdio.h>

int isPrime(int n,int i) {
	if(n<=2) {
		if(n==2)
			return 1;
		return 0;
	}
	if(n%i==0)
		return 0;
	if(i*i>n)
		return 1;
	return isPrime(n,i+1);
}

int main() {
	int n,i=2;
	printf("Enter a Number : ");
	scanf("%d",&n);
	if(isPrime(n,i))
		printf("%d is a Prime Number",n);
	else
		printf("%d is NOT a Prime Number",n);
}
