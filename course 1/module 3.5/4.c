#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    long long b;
    double c;
    char d;

    scanf("%d %lld %lf %c", &a, &b, &c, &d);
    printf("%d\n%lld\n%0.2lf\n%c", a, b, c, d);
    return 0;
}