#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	printf("%s\n","Hello, World!");
    printf("%s",s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

// [^] is the carat symbol
// \n is ignored if entered in the string
// *c == s for strings
