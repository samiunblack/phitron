#include <stdio.h>
#include <limits.h>
 
int main() {
    int n;
    scanf("%d", &n);

    long long max = -1;
    for(int i = 0; i < n; i++)
    {
        long long a;
        scanf("%lld", &a);

        long long count = 0;
        while(a % 2 == 0)
        {
            count++;
            a /= 2;
        }

        if(count > max)
        {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}