#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }

    if(sum < 0)
    {
        printf("%lld", sum * -1);
    }
    else {
        printf("%lld", sum);
    }

    return 0;
}