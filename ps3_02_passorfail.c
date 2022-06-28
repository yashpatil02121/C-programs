#include<stdio.h>
int main()
{
    int phy,chem,math,tot;
    float avg;
printf("enter PHYSICS marks:");
scanf("%d",&phy);
printf("enter CHEMISTRY marks:");
scanf("%d",&chem);
printf("enter MATHEMATICS marks:");
scanf("%d",&math);
tot=phy+chem+math;
avg=tot/3.00;
printf("average marks are %.2f\n",avg);
if (phy<33 || chem<33 || math<33)
{
    printf("You FAILED! because one of your subject score is less than 33\n");
}
else if(avg<40)
{
    printf("You FAILED! because your total score is less than 40\n");
}
else{
   printf("***congratulations!!! You PASSED***\n");  
}
printf("Your score is %.2f\n",avg);
    return 0;
}
