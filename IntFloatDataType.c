#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    float d1,d2;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&d1,&d2);
    printf("%d %d\n",n1+n2,n1-n2);
    printf("%0.1f %0.1f",d1+d2,d1-d2);
    return 0;
}

//Learn about input and float characters
// To be worked upon: variations of float outputs
