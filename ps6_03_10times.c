#include <stdio.h>
void tentimes(int *n,int *tt)
{
    *tt=*n*10;
}
int main () {
    int n,tt;
    printf("enter a number:");
    scanf("%d",&n);
    tentimes(&n,&tt);
    printf("ten times of %d is %d\n",n,tt);
   return 0;
}