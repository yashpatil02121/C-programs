#include <stdio.h>

int main () {
    int arr[10]={1,-3,5,-6,4,-8,3,-5,4,-8};
    int num=0;
    for (int i = 0; i<10; i++)
    {
        if (arr[i]>0)
        {
            num++;
        }
    }
    printf("number of positive integers is:>> %d\n", num);



   return 0;
}