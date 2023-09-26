#include <stdio.h>

void solve(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    solve(x, y);
    return 0;
}

void solve(int x, int y)
{
    printf("%d", x + y);
}