/*
//while
#include<stdio.h>
int main()
{
    int n,fact=1,a;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*a;
    a--;
    }
    printf("factorial of %d is %d",n,fact);

    return 0;
}
*/
//while
 #include<stdio.h>
int main()
{
    int i=1,n,fact=1,a;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    while(i<=n)
    {
        fact=fact*a;
    a--;
    i++;
    }
    printf("factorial of %d is %d",n,fact);

    return 0;
}
 