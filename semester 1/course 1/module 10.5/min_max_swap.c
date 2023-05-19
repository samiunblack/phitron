#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    int min_pos = 0;
    int max_pos = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_pos = i;
        }
        else if(arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    int temp = arr[max_pos];
    arr[max_pos] = arr[min_pos];
    arr[min_pos] = temp;

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}