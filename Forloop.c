#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i>9)
		{
			if(i%2==0)
			{
				printf("even");
			}
			else
			{
				printf("odd");
			}
		}
		else
		{
			if(i==1)
			{
				printf("one");
			}
			else if(i==2)
			{
				printf("two");
			}
			else if(i==3)
			{
				printf("three");
			}
			else if(i==4)
			{
				printf("four");
			}
			else if(i==5)
			{
				printf("five");
			}
			else if(i==6)
			{
				printf("six");
			}
			else if(i==7)
			{
				printf("seven");
			}
			else if(i==8)
			{
				printf("eight");
			}
			else if(i==9)
			{
				printf("nine");
			}
		}
		printf("\n");
	}
	return 0;
}
