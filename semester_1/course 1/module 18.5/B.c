#include <stdio.h>

void print(int n, int i)
{
    if(i == n)
    {
        printf("%d", i);
        return;
    }

    printf("%d\n", i);
    print(n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n, 1);
    return 0;
}