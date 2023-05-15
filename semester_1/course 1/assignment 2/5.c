#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];

    int i = 0;
    while(i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    for(int i = n - 1; i >= 0; i--)
    {
        if(i % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}