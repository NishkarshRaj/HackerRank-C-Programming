#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}

//Strings in C are taken not as whole but only till the first space
// BCD!! Since Java is written in C thats why we have to give a free Scanner.getLine() before swtiching to scanning string inputs
// To get entire String %s is replaced by %[^\n]%*c
// %[^\n] is used to read until an endline is encountered
// %*c is used to read the endline and * indicates to ignore it.
