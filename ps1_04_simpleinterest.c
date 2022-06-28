
#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("enter the principal amount:");
    scanf("%d",&p);
    printf("enter the rate of interest:");
    scanf("%d",&r);
    printf("enter the time(in years):");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("simple interest=%f",si);
    return 0;
}
