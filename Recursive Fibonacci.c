#include<stdio.h>

int fib(int n) {
	if (n<=1)
		return n;
	return fib(n-1) + fib(n-2);
}



int main() {
	int n;
	scanf("%d",&n);
	printf("The %dth number of Fibonacci Series = %d\n",n,fib(n));
	
	//Sum of Fibonacci 
	int sum = 0, i = 0;
	for(i=1;i<=n;i++) {
	sum = sum+fib(i);
	}
	printf("Sum of %d numbers of Fibonacci Series = %d",n,sum);
}


