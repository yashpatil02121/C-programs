#include<stdio.h>
void func(float m)
{
    float f;
    // force = mass x acceleration
    f=m*9.8;
    printf("force applied by %.2f is %.2f",m,f);
}

int main()
{
    float m;
    printf("enter the mass in kgs:\n");
    scanf("%f",&m);
    func(m);
    return 0;
}