#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	int *rev = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i); //BCD!!! Scanf takes the address of the variables & but here arr is pointer and arr + i is pointer to ith value from 0th index
		rev[n-1-i]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",rev[i]);
	}
}
