#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x, x_pos;
    scanf("%d %d", &x, &x_pos);

    for(int i = n - 1; i > x_pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[x_pos] = x;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}