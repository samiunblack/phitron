#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);

    int arr_2[m];

    for(int i = 0; i < m; i++)
    {
        scanf("%d", &arr_2[i]);
    }

    int total = n + m;
    int arr_cpy[total];

    for(int i = 0; i < n; i++)
    {
        arr_cpy[i] = arr[i];
    }

    for(int i = n; i < total; i++)
    {
        arr_cpy[i] = arr_2[i - n];
    }

    for(int i = 0; i < total; i++)
    {
        printf("%d ", arr_cpy[i]);
    }

    return 0;
}