#include <stdio.h>

void print(int n)
{
    if(n == 1)
    {
        printf("I love Recursion");
        return;
    }

    printf("I love Recursion\n");
    print(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}