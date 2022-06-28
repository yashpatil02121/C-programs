#include <stdio.h>
struct distance{
    int feet;
    int inch;
}d1,d2,result;

int main () {

    printf("enter 1st distance:\n");
    printf("enter feet:");
    scanf("%d",&d1.feet);
    printf("enter inch:");
    scanf("%d",&d1.inch);

    printf("enter 2nd distance:\n");
    printf("enter feet:");
    scanf("%d",&d2.feet);
    printf("enter inch:");
    scanf("%d",&d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while(result.feet>12.0)
    {
        result.inch = result.inch -12;
        result.feet++;
    }

    printf("sum of distances : %d'-%.1f\n",result.feet,result.inch );
   return 0;
}