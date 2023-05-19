#include <stdio.h>

void print(int n)
{
    if(n < 1) return;
    printf("%d ", n);
    print(n - 1);
}

int main() {
    print(5);
    return 0;
}