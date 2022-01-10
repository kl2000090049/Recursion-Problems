#include<stdio.h>

int fact(int n) {
	if(n==1 || n==0)
		return 1;
	return n*fact(n-1);
}

void logic(int n) {
	long int sum=0;
    int temp=n;
    while(temp>0) {
        sum=sum+fact(temp%10);
        temp/=10;
    }
    if(sum==n)
        printf("%d is a Strong Number or Krishnamurthy's Number",n);
    else
		printf("%d is not a Strong Number or Krishnamurthy's Number",n);        
}

int main() {
	int n;
	scanf("%d",&n);
	logic(n);
	
}
