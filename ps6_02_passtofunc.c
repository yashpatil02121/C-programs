#include <stdio.h>
void func(int a){
    printf("address of a is :>> %u\n",&a);

}
int main () {
    int i = 4;
    printf("value of i is :>> %d\n",i);
    func(i);
    printf("address of i is :>> %u\n",&i);

   return 0;
}