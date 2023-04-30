#include <stdio.h>

int sum(); 

int main() {
    
    printf("%d", sum());
    return 0;
}

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    return sum;
}