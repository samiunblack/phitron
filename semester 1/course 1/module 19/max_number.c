#include <stdio.h>
#include <limits.h>

int find_max(int *arr, int n, int i)
{
    if(i == n) return INT_MIN;
    int max = find_max(arr, n, i + 1);
    if(arr[i] > max)
    {
        return arr[i];
    }
    return max;
} 

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", find_max(arr, n, 0));

    return 0;
}