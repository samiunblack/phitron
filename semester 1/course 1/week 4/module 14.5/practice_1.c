#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int k = 1;
    int s = n - 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < k; j++)
        {
            printf("*");
        }

        k++;
        s--;
        printf("\n");
    }
    

    return 0;
}