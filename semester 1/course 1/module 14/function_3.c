#include <stdio.h>

void sum(int x, int y);

int main() {
    
    int x, y;
    scanf("%d %d", &x, &y);
    sum(x, y);
    
    return 0;
}

void sum(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}