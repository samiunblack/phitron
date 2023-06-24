#include <stdio.h>

void sum();

int main() {
    sum();
    return 0;
}

void sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", x + y);
}