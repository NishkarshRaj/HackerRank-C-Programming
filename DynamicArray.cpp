#include<stdio.h>
#include<stdlib.h> //header file for malloc but stdlib does not work in Linux (Standard C)
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int)); //Dynamic declaration of Array
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("%d",sum);
}
