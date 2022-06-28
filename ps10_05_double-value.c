#include <stdio.h>

int main () {

    FILE *ptr1;
    FILE *ptr2;
    int a;
    ptr1=fopen("ps10_05_integer1.txt","r");
    fscanf(ptr1,"%d",&a);
    ptr2=fopen("ps10_05_integer2.txt","w");
    fprintf(ptr2,"%d",a*2);
    return 0;
}