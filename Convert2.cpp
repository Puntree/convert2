#include <stdio.h>
#include <string.h>
void convert(char *s)
{
	int i;
 
    for(i=0;s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
        else if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}
}
int main()
{
 
    char s[100];  
  
    printf("Enter string: ");
    gets(s);
    
    convert(s);
     
    printf("Convert : %s",s);
    
}
