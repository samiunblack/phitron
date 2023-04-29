#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            printf("*");
        }
        k++;

        printf("\n");
    }

    return 0;
}