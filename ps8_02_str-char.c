#include <stdio.h>
#include<string.h>
int main () 
{
    char str1[20];
    char str2[20];
    char c;
    int i=0;
    printf("enter value of 1st string: ");
    scanf("%s",str1);
    printf("enter value of second string char by char:\n");
    while (c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i]='\0';
    printf("string 1 is :>> %s\n",str1);
    printf("string 2 is :>> %s\n",str2);

   return 0;
}