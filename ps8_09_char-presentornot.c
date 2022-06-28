#include<stdio.h>
#include<string.h>
int main () 
{
    int n,t=0; //t=number of times the char, n=lenght of string 
    char name[20],c;
    printf("enter your name:");
    scanf("%s",name);
    printf("enter character to be counted:");
    fflush(stdin);
    scanf("%c",&c);
    n=strlen(name);
    for (int i = 0; i < n; i++)
    {
        if(name[i]==c)
        {
            t++;
        }
    }
    if (t>0)
    {
        printf("'%c' is present in '%s','%d' times",c,name,t );
    }
    else
    {
        printf("'%c' is NOT present in %s",c,name);
    }
    return 0;
}