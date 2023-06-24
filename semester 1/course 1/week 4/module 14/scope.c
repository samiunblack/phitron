#include <stdio.h>

int x = 100;

void fun(void)
{
    int s = 200;
    printf("%d\n", &s);
}

int main() {
    int s = 100;    
    printf("%d\n", &s);
    fun();

    return 0;
}