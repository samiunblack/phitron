#include <stdio.h>
 
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int b[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            a[i][j] += b[i][j];
            printf("%d ", a[i][j]);  
        }
        printf("\n");
    }

    return 0;
}