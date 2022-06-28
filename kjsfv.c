#include <stdio.h>

int main () {
    int n;
    char string[]={'one','two','three','four','five','six','seven','eight','nine',};
    scanf("%d",&n);

    for (int i = 0; i < count; i++)
    {
        if (n>=1 && n<=9)
            printf("%s",string[n-1]);
    }
    

   return 0;
}