#include <stdio.h>
 
int main() {
    int row = 3, col = 2;
    int arr[row][col];

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
            if(arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag) printf("Zero Matrix");
    else printf("Not Zero Matrix");


    return 0;
}