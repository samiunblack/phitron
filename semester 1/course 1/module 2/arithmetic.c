#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int sum = a + b;
    int substract = b - a;
    int product = a * b;
    int quotient = b / a;
    int mod = b % a;

    printf("%d %d %d %d %d", sum, substract, product, quotient, mod);
    return 0;
}