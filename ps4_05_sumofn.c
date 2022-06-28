/*#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum of %d natural numbers is %d",n,sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of %d natural numbers is %d",n,sum);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);
    printf("sum of %d natural numbers is %d",n,sum);
    return 0;
}