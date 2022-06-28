#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature in celcius:");
    scanf("%f",&c);
    f=(c * 9/5) + 32;
    printf("the temperature in fahrenheit:%.2f",f);


    
    return 0;
}

