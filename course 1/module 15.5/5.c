#include <stdio.h>

void swap_it(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);

    printf("%d %d", a, b);

    return 0;
}