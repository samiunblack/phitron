#include <stdio.h>

void change_arr(int *ar, int n);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    change_arr(arr, 5);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void change_arr(int *ar, int n)
{
    ar[0] = 500;
}