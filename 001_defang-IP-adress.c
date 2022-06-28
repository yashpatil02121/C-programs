#include <stdio.h>
#include <string.h>
void func(char *real)
{
    char defang[]=*real;
    printf("defanged IP address is :>> %s\n",defang);

}
void main () {

    char ip[]="1.2.3.4.5.5.6";
    func(ip);
    
}