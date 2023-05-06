#include <stdio.h>

int print_arr(int arr[], int size, int current)
{
    if(current == size)
    {
        return 0;
    }

    printf("%d ", arr[current]);

    return print_arr(arr, size, current + 1); 
}

int main() {
    int arr[5] = {3, 4, 6, 7, 2};
    print_arr(arr, 5, 0);
    return 0;
}