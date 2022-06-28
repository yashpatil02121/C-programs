#include <stdio.h>

int main () {
    FILE *ptr;
    ptr=fopen("ps10_04_info.txt","w");
    char n1[15];
    char n2[15];
    int s1,s2;
    printf("enter 1st employee name:");
    gets(n1);
    printf("enter 2nd employee name:");
    gets(n2);

    printf("enter 1st employee salary:");
    scanf("%d",s1);
    printf("enter 2nd employee salary:");
    scanf("%d",s2);

    printf("name: %s\n",n1 );



   return 0;
}