#include<stdio.h>
#include<string.h>
int main () 
{
    int n,t=0;
    char name[20],c;
    printf("enter your name:");
    scanf("%s",name);
    printf("enter character to be counted:");
    scanf("%c",&c);
    n=strlen(name);
    for (int i = 0; i < n; i++)
    {
        if(name[i]==c)
        {
            t++;
        }
    }
    printf("number of '%c' in '%s' is '%d'",c,name,t );
    return 0;
}