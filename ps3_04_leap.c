#include<stdio.h>
int main()
{
    int n;
    printf("enter a year:");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("entered year is a leap year");
    }
    else
    {
        printf("entered year is not a leap year");
    }
    return 0;
}
