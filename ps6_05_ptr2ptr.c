#include <stdio.h>

int main () {
int i=5;
int *ptr,**ptrptr;
ptr=&i;
ptrptr=&ptr;
printf("value of i is :>> %d\n",**ptrptr);
   return 0;
}