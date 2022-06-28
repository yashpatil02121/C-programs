#include <stdio.h>
int tentimes(int n)
{
    int tt;
    tt=n*10;
    return tt;
}
int main () 
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("ten times of %d is %d\n",n,tentimes(n));
    return 0;
}