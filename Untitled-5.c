
#include <stdio.h>
int main()
{
    int reactor_core = 12;
    int a = reactor_core*2;
    int b = reactor_core*reactor_core;
    printf("[");
    printf("%d",reactor_core);
    printf(",");
    printf(" ");
    printf("%d",a);
    printf(",");
    printf(" ");
    printf("%d",b);
    printf("]");
    return 0;
}