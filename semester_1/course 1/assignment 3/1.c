#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    for(int i = 0; i < n * 2; i++)
    {
        if(i < n - 1)
        {
            for(int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= k; j++)
            {
                printf("%d", j);
            }

            k+=2;
            s--;
        }
        else 
        {
            for(int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for(int j = 1; j <= k; j++)
            {
                printf("%d", j);
            }

            k -= 2;
            s++;
        }

        printf("\n");
    }

    return 0;
}