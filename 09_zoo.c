#include <stdio.h>
struct zoo
{
    char animal[15];
    char bird[15];
}n1,n2,n3;

int main () 
{
    printf("enter 1st animal:\n");
    scanf("%s",n1.animal );
    printf("enter 1st bird:\n");
    scanf("%s",n1.bird);

    printf("enter 2nd animal:\n");
    scanf("%s",n2.animal );
    printf("enter 2nd bird:\n");
    scanf("%s",n2.bird);

    printf("enter 3rd animal:\n");
    scanf("%s",n3.animal );
    printf("enter 3rd bird:\n");
    scanf("%s",n3.bird);
    
    printf("1st animal is %s\n",n1.animal );
    printf("2nd animal is %s\n",n2.animal );
    printf("3rd animal is %s\n",n3.animal );
    printf("1st bird is %s\n",n1.bird );
    printf("2nd bird is %s\n",n2.bird );
    printf("3rd bird is %s\n",n3.bird );
   return 0;
}