#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    int max = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", max - arr[i]);
    }
    return 0;
}
