#include<stdio.h>
int main()
{

    int a=5;
    int *ptr;
    ptr=&a;
    printf("value of a is %d\n",a);
    printf("address of a is %u\n",ptr);
    printf("value of a is %d",*ptr);
    return 0;
}
