#include <stdio.h>

int main () {
    FILE *ptr;
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    ptr = fopen ("ps10_02.txt","w");
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",n,i,n*i); 
    }
    fclose(ptr); 
   return 0;
} 