#include<stdio.h>
int main()
{
	int n,k,maxba=0,maxbo=0,maxbx=0,i,j;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(i<j)
			{
				if(((i&j)<k)&&((i&j)>maxba))
				{
					maxba = i&j;
				}
				if(((i|j)<k)&&((i|j)>maxbo))
				{
					maxbo = i|j;
				}
				if(((i^j)<k)&&((i^j)>maxbx))
				{
					maxbx = i^j;
				}
			}
		}
	}
	printf("%d\n%d\n%d",maxba,maxbo,maxbx);
	return 0;
}
