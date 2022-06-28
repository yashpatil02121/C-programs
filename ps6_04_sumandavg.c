#include <stdio.h>
void sumandavg(int a,int b,int *sum,float *avg)
{
    *sum=a+b;
    *avg=*sum/2.0;
}
int main ()
{
    int i=6,j=3,sum;
    float avg;
    sumandavg(i,j,&sum,&avg);
    printf("value of sum is %d\n",sum );
    printf("value of average is %f\n",avg );
   return 0;
}