#include <stdio.h>
void cal(int a,int b,int *add,int *sub,int *mul,float *div,int *mod)
{
    *add=a+b;
    *sub=a-b;
    *mul=a*b;
    *div=a*1.00/b;
    *mod=a%b;
}
int main () {
    int x,y,add,sub,mul,mod;
    float div;
    printf("enter value of x ");
    scanf("%d",&x);
    printf("enter value of y ");
    scanf("%d",&y);
    cal(x,y,&add,&sub,&mul,&div,&mod);
    printf("addition :>> %d\n",add );
    printf("subtraction :>> %d\n",sub );
    printf("multiplication :>> %d\n",mul );
    printf("division :>> %f\n",div);
    printf("modulas :>> %d\n",mod );
   return 0;
}