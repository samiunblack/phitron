#include <stdio.h>

void print_digit(int a)
{
    if(a == 0) return;
    print_digit(a / 10);
    printf("%d ", a % 10);
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        if(a == 0)
        {
            printf("0\n");
            continue;
        }
        print_digit(a);
        printf("\n");
    }

    return 0;
}