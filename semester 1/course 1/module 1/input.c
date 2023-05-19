#include <stdio.h>

int main()
{
    int a, b;
    double c, d;
    char g, h;
    scanf("%d %d %lf %lf %c %c", &a, &b, &c, &d, &g, &h);
    printf("%d %d, %0.2lf %0.2lf, %c %c", a, b, c, d, g, h);
    return 0;
}