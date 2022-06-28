#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
}s;

void display(char *name,int roll,float marks)
{
    printf("name: %s\n",s.name);
    printf("roll no: %d\n",s.roll);
    printf("marks: %f\n",s.marks);
}

int main () {
    printf("enter information :\n");
    printf("enter name :\n");
    scanf("%s",&s.name);

    printf("enter roll  no :\n");
    scanf("%d",&s.roll);

    printf("enter marks :\n");
    scanf("%f",&s.marks);
    display(s.name,s.roll,s.marks);
   return 0;
}