#include<stdio.h>
int main()
{
    int n,i;
float num[100],sum=0,avg;
printf("\nHow many numbers?");
scanf("%d",&n);
while(n>100,n<1)
{
    printf("ERROR! Numbers should be in range of 1 & 100!!!");
    printf("Enter the number again!");
    scanf("%d",&n);
}
for(i=0;i<n;++i)
{
    printf("\n\n%d.Enter the number:",i+1);
    scanf("%f",&num[i]);
    sum+=num[i];
}

avg=sum/n;
printf("\n\nAVERAGE=%.2f",avg);

    return 0;
}
