#include <stdio.h>
 
int main() {
    double x, p;
    scanf("%lf %lf", &x, &p);

    double a = (100 * p)/(100 - x);
    printf("%0.2lf", a);

    return 0;
}