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
    int min_pos = 1;

    for(int i = 0; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            min_pos = i + 1;
        }
    }

    printf("%d %d", min, min_pos);

    return 0;
}