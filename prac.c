#include <stdio.h>

void func(int *i)
{
    printf("ten times of i(%d) is :>> %d\n",*i,(*i*10));
}

int main (int argc, char *argv[]) {
    int i=5;
    int *ptr;
    ptr=&i;
    printf("value of i is %d\n", i);
    printf("the address of i is %u\n", &i);
    printf("the value at address of i is %d\n",*ptr);
    func(&i);
   return 0;
}