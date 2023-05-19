#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x_pos;
    scanf("%d", &x_pos);

    for(int i = x_pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}