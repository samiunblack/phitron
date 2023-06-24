#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int k = 1;
    int p = n - 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            printf(" ");
        }
        p--;

        for(int j = 0; j < k; j++)
        {
            printf("*");
        }
        k+= 2;

        printf("\n");
    }
    
    return 0;
}