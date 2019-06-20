#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i,n,start=0;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s); //No getline in C!! Use this for full String and not till the first space
    //s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(i=0;i<1024;i++)
    {
    	if((s[i]==' ')||(s[i]=='\0')) //BCD!!!! Character is ' ' and String is " " 
		{
			//n++;
			for(n=start;n<i;n++)
			{
				printf("%c",s[n]);
			}	
			printf("\n");
			start=i+1;
		}	
		if(s[i]=='\0')
		{
			break;
		}
	}
	//printf("%d",n);
	return 0;
}


