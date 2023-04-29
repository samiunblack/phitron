#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int found = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == x)
            {
                printf("arr[%d] = %d\narr[%d] = %d", i, arr[i], j, arr[j]);
                break;
            }
        }
    }

    return 0;
}