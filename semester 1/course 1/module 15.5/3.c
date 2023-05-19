#include <stdio.h>

int count_odd(int *ar, int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(ar[i] % 2 == 1)
        {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", count_odd(arr, n));
    
    return 0;
}