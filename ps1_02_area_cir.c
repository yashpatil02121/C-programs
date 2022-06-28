#include<stdio.h>
int main()
{
    int r,h;
    float a,vc;
    printf("enter the radius:\n");
    scanf("%d",&r);
    a=3.142*r*r;
    printf("area of circle is %.2f\n\n",a);
    printf("enter the height of cylinder:\n");
    scanf("%d",&h);
    vc=a*h;
    printf("volume of cylinder is %.2f\n",vc);

    return 0;
}
