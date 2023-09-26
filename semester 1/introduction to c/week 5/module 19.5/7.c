#include <stdio.h>
 
int main() {
    int n;
    int a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int ans = n / (a * b * c);
    printf("%d", ans);

    return 0;
}