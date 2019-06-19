#include<stdio.h>
int main()
{
	int n,size,center,count,i,start,end;
	scanf("%d",&n);
	size = (2*n)-1;
	center = (size-1)/2;
	int arr[size];
	for(i=0;i<size;i++)
	{
		arr[i]=n;
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	start=0;
	end=size-1;
	for(count=0;count<center;count++)
	{
		//printf("%d\n",count);
		start=1+start;
		end=end-1;
		//printf("%d\n%d\n",start,end);
		if(start==0)
		{
			//do nothing
		}
		else
		{
			//printf("Check\n");
			for(i=start;i<=end;i++)
			{
				arr[i]--;
			}
		}
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		printf("\n");
	}
	arr[center]++;
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	start=center;
	end=center;
	while(start>1)
	{
		start--;
		end++;
		for(i=start;i<=end;i++)
		{
			arr[i]++;
		}
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
