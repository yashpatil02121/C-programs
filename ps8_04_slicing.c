#include <stdio.h>
void slice(char *st,int m, int n)
{
    int i=0;
    while((m+i)<n)
    {
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}
int main () 
{
    char st[]="yashsanjaypatil";
    slice(st,4,10);
    printf("%s",st );

   return 0;
}