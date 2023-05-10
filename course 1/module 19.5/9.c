#include <stdio.h>
 
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[a][b];
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < b; i++)
    {
        printf("%d ", arr[1][i]);
    }
    printf("\n");

    for(int i = 0; i < a; i++)
    {
        printf("%d ", arr[i][2]);
    }

    return 0;
}