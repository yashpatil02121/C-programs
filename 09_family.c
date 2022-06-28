#include <stdio.h>
struct family
{
    char name[10];
    int age;
    char occupation[20];

}d,m,s,t,y;

int main () {
    printf("\nfor DAD\n");
    printf("enter name:");
    scanf("%s",d.name);
    printf("enter age:");
    scanf("%d",&d.age);
    printf("enter occupation:");
    scanf("%s",d.occupation);

    printf("\nfor MOM\n");
    printf("enter name:");
    scanf("%s",m.name);
    printf("enter age:");
    scanf("%d",&m.age);
    printf("enter occupation:");
    printf("for MOM\n");
    scanf("%s",m.occupation);

    printf("\nfor SNEHA\n");
    printf("enter name:");
    scanf("%s",s.name);
    printf("enter age:");
    scanf("%d",&s.age);
    printf("enter occupation:");
    scanf("%s",s.occupation);

    printf("\nfor TEJU\n");
    printf("enter name:");
    scanf("%s",t.name);
    printf("enter age:");
    scanf("%d",&t.age);
    printf("enter occupation:");
    scanf("%s",t.occupation);

    printf("\nfor YASH\n");
    printf("enter name:");
    scanf("%s",y.name);
    printf("enter age:");
    scanf("%d",&y.age);
    printf("enter occupation:");
    scanf("%s",y.occupation);

    printf("\n\ninformation display\n\n");

    printf("DAD:>>\n");
    printf("NAME:>>%s\n",d.name);
    printf("AGE:>>%d\n",d.age );
    printf("OCCUPATION :>>%s\n",d.occupation);

    printf("DAD:>>\n");
    printf("NAME:>>%s\n",m.name);
    printf("AGE:>>%d\n",m.age );
    printf("OCCUPATION :>>%s\n",m.occupation);

    printf("DAD:>>\n");
    printf("NAME:>>%s\n",s.name);
    printf("AGE:>>%d\n",s.age );
    printf("OCCUPATION :>>%s\n",s.occupation);

    printf("DAD:>>\n");
    printf("NAME:>>%s\n",t.name);
    printf("AGE:>>%d\n",t.age );
    printf("OCCUPATION :>>%s\n",t.occupation);

    printf("DAD:>>\n");
    printf("NAME:>>%s\n",y.name);
    printf("AGE:>>%d\n",y.age );
    printf("OCCUPATION :>>%s\n",y.occupation);


   return 0;
}