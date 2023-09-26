#include <stdio.h>

void take_arr(int *ar, int n);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    take_arr(arr, 5);
    return 0;
}

void take_arr(int *ar, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("ar[%d] = %d\n", i, ar[i]);
        printf("ar[%d] = %d\n", i, *(ar + i));
    }
}