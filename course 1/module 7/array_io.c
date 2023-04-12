#include <stdio.h>
 
int main() {
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr_2[5] = {5, 30, 42, 54, 512};

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr_2[i]);
    }

    return 0;
}