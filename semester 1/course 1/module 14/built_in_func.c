#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x;
    scanf("%lf", &x);
    int roundX = round(x);
    int floorX = floor(x);
    int ceilX = ceil(x);

    printf("round(%0.2lf) = %d floor(%0.2lf) = %d ceil(%0.2lf) = %d\n", x, roundX, x, floorX, x, ceilX);

    int n;
    scanf("%d", &n);

    int sqrtN = sqrt(n);
    printf("square root of %d = %d\n", n, sqrtN);

    int m, p;
    scanf("%d %d", &m, &p);

    int powM = pow(m, p);

    printf("%d to the power %d = %d\n", m, p, powM);

    int k;
    scanf("%d", &k);

    printf("%d", abs(k));

    return 0;
}