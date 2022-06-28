#include<stdio.h>
int main()
{
    char n;
    printf("enter a character:");
    scanf("%c",&n);
    if(n>='a' && n<='z')
    {
        printf("character is lowercase\n");
    }
    else if(n>='A' && n<='Z')
    {
        printf("character is uppercase\n");
    }
    else 
    {
        printf("**invalid character**");
    }
    return 0;
}
