#include <stdio.h>

int pass_by_value(int x)
{
    x = 10;
    printf("x inside the function: %d\n", x);
}

int pass_by_reference(int *a)
{
    *a = 20;
    printf("a inside the function: %d\n", *a);    
}

int main() {
    int x = 30;
    pass_by_value(x);
    printf("x outside the function: %d\n", x);
    

    int a = 40;
    pass_by_reference(&a);
    printf("a outside the function: %d\n", a);

    return 0;
}