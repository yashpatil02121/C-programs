#include<stdio.h>
int func(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 1;
        else 
            return 0;

    }


}

int main()
{
    int n,a;
    printf("enter a number:");
    scanf("%d",&n);
    a=func(n);
    if (a)
    printf("not prime");
    else
    printf("prime");
    return 0;
}
