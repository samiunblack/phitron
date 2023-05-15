#include <stdio.h>
 
int main() {
    int row = 5, col = 4;
    int arr[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nprinting row wise\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    printf("\nprinting column wise\n\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("arr[%d][%d] = %d\n", j, i, arr[j][i]);
        }
    }

    return 0;
}