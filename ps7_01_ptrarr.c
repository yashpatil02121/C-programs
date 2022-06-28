#include <stdio.h>

int main () {
int arr[10];
int *ptr;
ptr=&arr;
printf("address of array is :>> %u\n",ptr);
printf("address of array is :>> %u\n",ptr+2);
return 0;
}