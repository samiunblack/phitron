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

    int freq[max + 1];

    for(int i = 0; i < max + 1; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]] += 1;
    }

    for(int i = 0; i < max + 1; i++)
    {
        printf("%d: %d\n", i, freq[i]);
    }

    return 0;
}