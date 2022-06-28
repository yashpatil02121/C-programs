#include <stdio.h>
#include<string.h>
int main () 
{
    char st1[]="yash";
    char st2[]="patil";
    printf("1st string before copy is %s\n",st1);
    printf("2nd string before copy is %s\n-------------------------------\n",st2);
    strcpy(st1,st2);
    printf("1st string after copy is %s\n",st1);
    printf("2nd string after copy is %s\n",st2);
   return 0;
}