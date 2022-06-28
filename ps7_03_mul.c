#include <stdio.h>

int main () {
    int multable[11];
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        multable[i]=n*i;
        printf("%d x %d = %d\n",n,i,multable[i]);
    }
    return 0;

}