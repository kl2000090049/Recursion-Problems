#include<stdio.h>

int SumOfNN(n) {
	if(n<=1)
		return 1;
	return n+SumOfNN(n-1);	
}

int main() {
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf("Sum of Natural Numbers upto %d : %d",n,SumOfNN(n));
}
