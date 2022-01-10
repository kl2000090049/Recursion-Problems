#include<stdio.h>
int main() {
	long long int n;
	scanf("%lld",&n);
	printf("%lld",fact(n));
	
}

int fact(long long int n) {
	if(n>=1)
		return n*fact(n-1);
	else
		return 1;
}
