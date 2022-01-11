#include<stdio.h>

int dec2bin(int n) {
	if(n==0)
		return 0;
	return (n%2+10*dec2bin(n/2));
}

int main() {
	int n;
	printf("Enter a Decimal Number         : ");
	scanf("%d",&n);
	printf("Binary Representation of %d is : %d",n,dec2bin(n));
}
