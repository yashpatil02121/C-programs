#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display (date d)
{
    printf("the date is :>> %d/%d/%d\n",d.date,d.month,d.year);
}

int main () {
    int date d1 = {2,11,21};
    int date d2 = {5,12,22};

    display(d1);
    display(d2);



   return 0;
}











// #include <stdio.h>
// void compare(char *d.date1,char *d.date2)
// {
//     printf("comparing gives :>> %d\n",strcmp(d.date1,d.date2));
// }

// struct dated
// {
//     char date1[10];
//     char date2[10];
// }d;


// int main () {

//     printf("enter 1st date:");
//     scanf("%s",d.date1);
//     printf("enter 2nd date:");
//     scanf("%s",d.date2);

//     compare(d.date1,d.date2);

//    return 0;
// }

// void compare (int *d1.date,int *d1.month,int *d1.year,int *d2.date,int *d2.month,int *
// d2.year )
// {
//     printf("comparing dates gives :>> %d\n",(d1.date-d2.date) );
//     printf("comparing months gives :>> %d\n",(d1.month-d2.month) );
//     printf("comparing years gives :>> %d\n",(d1.year-d2.year) );
// }

// int main () {
//     printf("for 1st date:\n");
//     printf("enter date:");
//     scanf("%d",&d1.date);
//     printf("enter month:");
//     scanf("%d",&d1.month);
//     printf("enter year:");
//     scanf("%d",&d1.year);

// printf("for 2nd date:\n");
// printf("enter date:");
// scanf("%d",&d2.date);
// printf("enter month:");
// scanf("%d",&d2.month);
// printf("enter year:");
// scanf("%d",&d2.year);

// compare(d1.date,d1.month,d1.year,d2.date,d2.month,d2.year);

