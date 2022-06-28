#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);  
    printf("divisibility test returns :%d",n%97==0);
    return 0;
}
