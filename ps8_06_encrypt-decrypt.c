#include <stdio.h>
void encrypt(char *c)
{
    char *ptr=c;
    while (*ptr!='\0')
    {
        *ptr = *ptr + 3;
        ptr++;
    }
}

void decrypt(char *d)
{
    char *ptr=d;
    while (*ptr!='\0')
    {
        *ptr = *ptr - 3;
        ptr++;
    }
}

int main () {
    char c[]="come to this room";
    encrypt(c);
    printf("encrypted string is :>> %s\n",c);
    char d[]="frph#wr#wklv#urrp";
    decrypt(d);
    printf("decrypted string is :>> %s\n",d);
    return 0;
}