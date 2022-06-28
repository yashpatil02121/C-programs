#include <stdio.h>
struct bank
{
    char yn[20];      
    char bn[20];      
    int acc;
    char ifsc[20];
    int bal;
}c1,c2;

void display( char *yn,char *bn,int acc, char *ifsc,int bal)
{
    printf("\n\nNAME:>>%s\n",yn);
    printf("BANKNAME:>>%s\n",bn);
    printf("ACCOUNT NO:>>%d\n",acc);
    printf("IFSC CODE:>>%s\n",ifsc);
    printf("BALANCE AMOUNT:>>%d\n\n",bal);
}
int main () {
    printf("FOR CUSTOMER 1:\n");
    printf("enter your name:\n");
    scanf("%s",c1.yn);
    printf("enter bank name:\n");
    scanf("%s",c1.bn);
    printf("enter bank account number:\n");
    scanf("%d",&c1.acc);
    printf("enter your ifsc code:\n");
    scanf("%s",c1.ifsc);
    printf("enter balance amount in your account:\n");
    scanf("%d",&c1.bal);

    printf("\nFOR CUSTOMER 2:\n");
    printf("enter your name:\n");
    scanf("%s",c2.yn);
    printf("enter bank name:\n");
    scanf("%s",c2.bn);
    printf("enter bank account number:\n");
    scanf("%d",&c2.acc);
    printf("enter your ifsc code:\n");
    scanf("%s",c2.ifsc);
    printf("enter balance amount in your account:\n");
    scanf("%d",&c2.bal);

    display(c1.yn,c1.bn,c1.acc,c1.ifsc,c1.bal);
    display(c2.yn,c2.bn,c2.acc,c2.ifsc,c2.bal);

   return 0;
}
//   yn=your
//   bn=bank name
//   acc=account
//   c1,c2=customer 1,2