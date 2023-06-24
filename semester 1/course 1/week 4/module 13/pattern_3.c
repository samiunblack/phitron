#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int k = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k++;
        printf("\n");
    }
    
    return 0;
}