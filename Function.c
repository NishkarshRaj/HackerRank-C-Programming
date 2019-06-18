#include<stdio.h>
int max_of_four(int a,int b,int c,int d);
int max_of_four(int a,int b,int c,int d)
{
    int max;
    if((a>b)&&(a>c)&&(a>d))
    {
        max=a;
    }
    if((b>a)&&(b>c)&&(b>d))
    {
        max=b;
    }
    if((c>b)&&(c>a)&&(c>d))
    {
        max=c;
    }
    if((d>b)&&(d>c)&&(d>a))
    {
        max=d;
    }
    return max;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d",max_of_four(a,b,c,d));
    return 0;
}
