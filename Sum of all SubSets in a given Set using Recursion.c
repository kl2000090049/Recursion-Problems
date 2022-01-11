#include<stdio.h>

void SumOfSubSets(int a[],int l,int r,int sum) {
	if(l>r) {
		printf("%d ",sum);
		return;
	}
	SumOfSubSets(a,l+1,r,sum+a[l]);
	SumOfSubSets(a,l+1,r,sum);
}

int main() {
	int n,i,j;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	SumOfSubSets(a,0,n-1,0);
}
