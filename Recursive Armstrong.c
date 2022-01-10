#include<stdio.h>
#include<math.h>

int Armstrong(int n) {
	if(n>0)
		return pow(n%10,3)+Armstrong(n/10);
}

int main() {
	int n;
	scanf("%d",&n);
	if(Armstrong(n)==n)
		printf("%d is an Armstrong Number",n);
	else
		printf("%d is not an Armstrong Number",n);
}
