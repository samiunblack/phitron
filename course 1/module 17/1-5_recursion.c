#include <stdio.h>

int print(int n, int current)
{
    if(current == n)
    {
        printf("%d", n);
        return 0;
    }

    printf("%d ", current);
    return print(n, current + 1);
} 

int main() {
    print(5, 1);

    return 0;
}