#include<stdio.h>
void func(int a,int b,int c)
{
    float avg;
    avg=(a+b+c)/3.00;
    printf("average is %f",avg);
}

int main()
{
    int a,b,c;
    printf("enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    func(a,b,c);
    
    return 0;
}