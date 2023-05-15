#include <stdio.h>

void fun(int a)
{
    int *pa = &a;
    printf("function x address: %d\n", pa);
    a = 100;
    printf("value of x inside function: %d\n", a);
} 

int main() {
    int x = 10;
    fun(x);
    printf("main x address: %d\n", &x);
    printf("value of x outside function: %d\n", x);

    return 0;
}

/*
when passed by value a new variable is created inside the function for the value passed
so if the value is changed inside the function it doesnt have any impact on the variable passed to the function
*/