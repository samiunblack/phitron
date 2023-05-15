#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int diff = abs(a - b);

    if(diff <= 1 && a >= 1 && b >= 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}