#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter four numbers:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is greatest",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is greatest",b);
    }
    else if(c>b && c>a && c>d)
    {
        printf("%d is greatest",c);
    }
    else
    {
        printf("%d is greatest",d);
    }
    
    return 0;
}
