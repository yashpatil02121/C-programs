#include <stdio.h>
#include<string.h>
int main () 
{
    int n,c;
    char a[20];
    char name[20];
    char append[]="1234";
    printf("enter a string:");
    scanf("%s",name);
    n=strlen(name);
    printf("%s contains %d characters...\n",name,n);
    c=strcmp(name,"abcd");
    printf("comparing gives: %d\n",c);
    printf("0 for equal strings 1 for unequal strings\n");
    a[20]=strcat(name,append);
    printf("string when concatenated :>> %s\n",a );
   return 0;
}