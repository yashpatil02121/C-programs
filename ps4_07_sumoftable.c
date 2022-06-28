#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        sum=sum+(n*i);
    }
    printf("sum is %d",sum);
    return 0;
}