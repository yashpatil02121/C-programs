#include<stdio.h>
void func(int c)
{
    float f;
    //(0°C × 9/5) + 32 = 32°F
    f=(c*(9/5.0))+32;
    printf("temperature in fahrenheit is %.2f",f);
}

int main()
{
    float c;
    printf("enter temperature in celcius:\n");
    scanf("%f",&c);
    func(c);
    return 0;
}