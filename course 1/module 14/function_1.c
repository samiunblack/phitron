#include <stdio.h>

int sum(int x, int y); 

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int result = sum(x, y);
    printf("%d", result);

    return 0;
}

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}