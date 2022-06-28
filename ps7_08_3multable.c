#include <stdio.h>
int main () {
    int mul[100][10];
    int n;
    
    for (int a = 1; a < 11; a++)
    {
        printf("enter a numbers:\n" );
        scanf("%d",&n);
        for (int i = 1; i < 11; i++)
        {
            mul[n][i]=(n*i);
            printf("%d x %d = %d\n",n,i,mul[n][i]);
        }
    }
   return 0;
}