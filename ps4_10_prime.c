/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("not prime");
            break;
        }
        else 
           {
            printf("prime");
           break;
           }

    }   
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i=2,n;
    printf("enter a number:");
    scanf("%d",&n);
    while(i<=n/2)
    {
        if(n%i==0)
        {
            printf("not prime");
            break;
        }
        else 
           {
            printf("prime");
           break;
           }
        i++;
    }   
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i=2,n;
    printf("enter a number:");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            printf("not prime");
            break;
        }
        else 
           {
            printf("prime");
           break;
           }
        i++;
    }
    while(i<=n/2);   
    return 0;
}