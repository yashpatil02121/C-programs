#include<stdio.h>
int main()
{
    int i,j,k,s;
    for(i=1;i<=5;i++)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=i-1;s>=1;s--)
        {
            printf("%d",s);
        }
        printf("\n");
    }
    for(i=4;i>=1;i--)
    {
        for(k=4;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=i-1;s>=1;s--)
        {
            printf("%d",s);
        }
        printf("\n");
    }
    return 0;
}
