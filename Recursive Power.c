#include<stdio.h>

int power(int b,int p) {
	if(p==0)
		return 1;
	else if(p%2==0)
		return power(b,p/2)*power(b,p/2);
	else
		return b*power(b,p/2)*power(b,p/2);
}

int main() {
	int b,p;
	scanf("%d%d",&b,&p);
	printf("%d",power(b,p));
}
