#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n - 1;

    while(left < right)
    {
        int temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;

        left++;
        right--;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}