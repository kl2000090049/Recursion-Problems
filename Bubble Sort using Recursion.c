#include<stdio.h>

void bubbleSort(int a[],int n) {
	int i,temp=0;
	if(n==1)
		return;
	for(i=0;i<n-1;i++)
		if(a[i]>a[i+1]) {
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
			
	
	bubbleSort(a,n-1);	
}

int main() {
	int n,i,j;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubbleSort(a, n);
    printf("Sorted array : \n");
    for(j=0;j<n;j++)
		printf("%d ",a[j]);
	printf("\n");
}
