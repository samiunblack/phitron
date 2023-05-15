#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);

    while(t--)
    {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        unsigned long long sum = b*(b+1)/2 - a*(a+1)/2 + a;
        printf("%llu\n", sum);
    }

    return 0;
}