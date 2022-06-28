#include<stdio.h>
int main()
{
    int n,j=10;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<11;i++)
    {
        printf("%d x %d = %d\n",n,j,n*j);
        j--;
    }
    
    return 0;
} 