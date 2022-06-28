#include<stdio.h>
void design(int n);


int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    design(n);
    return 0;
}
void design(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       printf("*");
     printf("\n");
    }
    
}