#include <stdio.h>

int my_abs(int x)
{
    if(x < 0)
    {
        int absolute = (x * -2) + x;
        return absolute;
    }
    else{
        return x;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));
    return 0;
}