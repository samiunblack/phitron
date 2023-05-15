#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l = 0;
    int r = n - 1;

    while(l < r)
    {
        printf("%d ", arr[l]);
        printf("%d ", arr[r]);
        l++;
        r--;
    }

    if(n % 2 != 0)
    {
        printf("%d", arr[n / 2]);
    }

    return 0;
}