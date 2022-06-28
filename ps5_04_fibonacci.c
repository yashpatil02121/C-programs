#include<stdio.h>

void fib(int n)
{

    int first=0, second=1, i, sum=0;
    printf("Fibonacci Series:");
    for(i=0 ; i<n ; i++)
    {
        if(i <= 1)
        {
            sum=i;
        }
//to print 0 and 1
        else
        {
            sum=first + second;
            first=second;
            second=sum;
        }
//to calculate the remaining terms.
//value of first and second changes as new term is printed.
        printf(" %d",sum);
    }
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
//accepting the terms
    fib(n);
    return 0;
}