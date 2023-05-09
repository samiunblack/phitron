#include <stdio.h>

long long factorial(int n)
{
    if(n == 1) return 1;

    long long fact = n * factorial(n - 1);
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%lld", factorial(n));
    return 0;
}