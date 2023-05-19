#include <stdio.h>

void fun(int *px)
{
    printf("address of x in fun: %d\n", px);
    *px = 50;
    printf("value of x in fun: %d\n", *px);
}

int main() {
    int x = 10;
    fun(&x);
    printf("address of x in main: %d\n", &x);
    printf("value of x in fun: %d\n", x);

    return 0;
}

/*
when passed by reference the address of the variable is sent to the function
so if the value that the address stored in the pointer stores is changed then
the value in the variable whose address is sent in the function also changes
*/