#include<stdio.h>
int func(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=i+func(n-1);
    }
    return sum;
}

int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    printf("sum is %d",func(n));

    return 0;
}