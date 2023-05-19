#include <stdio.h>

void solve(int n)
{
    for(int i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", n);
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n);

    return 0;
}