#include <stdio.h>

long long sum(int *arr, int n, int i)
{
    if(i > n - 1)
    {
        return 0;
    }

    long long total = arr[i] + sum(arr, n, i + 1);
    return total;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%lld", sum(arr, n, 0));

    return 0;
}