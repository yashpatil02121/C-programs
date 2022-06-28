#include<stdio.h>
int main()
{
    int i,j,n,a[50],temp; 
    printf("Enter the number of array elements you want in array:");
    scanf("%d",&a[i]);
    printf("Enter elements in the array:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
printf("\n\nThe numbers in ASCENDING ORDER are:");
for(i=0;i<n;i++)
{
    printf("\n%d\n",a[i]);
}
    
    return 0;
}

