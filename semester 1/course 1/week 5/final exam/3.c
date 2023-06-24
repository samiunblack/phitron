#include <stdio.h>
 
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i = 0; i < m; i++)
    {
        printf("%d ", arr[n - 1][i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i][m - 1]);
    }

    return 0;
}