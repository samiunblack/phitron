#include <stdio.h>
 
int main() {
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    if(row != col)
    {
        printf("Not scalar matrix");
        return 0;
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] != 0 && i != j)
            {
                flag = 0;
                break;
            }
            
            if(i == j && arr[i][j] != arr[0][0])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag) printf("Scalar Matrix");
    else printf("Not Scalar Matrix");

    return 0;
}