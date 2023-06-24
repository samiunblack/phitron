#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    long long arr[n];

    int i = 0;
    while(i < n)
    {
        scanf("%lld", &arr[i]);
        i++;
    }

    long long sum_e = 0, sum_o = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            sum_e += arr[i];
        }
        else {
            sum_o += arr[i];
        }
    }

    printf("%lld %lld", sum_e, sum_o);

    return 0;
}