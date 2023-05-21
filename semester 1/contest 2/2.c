#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && a == c && b == c && a != 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}