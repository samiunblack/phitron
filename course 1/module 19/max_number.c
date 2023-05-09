#include <stdio.h>
#include <limits.h>

int find_max(int *arr, int n, int i, int max)
{
    if(i == n) return max;
    if(arr[i] > max)
    {
        max = arr[i];
    }
    return find_max(arr, n, i + 1, max);
} 

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    printf("%d", find_max(arr, n, 0, max));

    return 0;
}