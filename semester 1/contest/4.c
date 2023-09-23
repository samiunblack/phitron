#include <stdio.h>
#include <limits.h> 

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {

        if(i == n / 2)
        {
            for(int j = 0; j < n; j++)
            {
                printf("#");
            }
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                if(j != n /2)
                {
                    printf("*");
                }
                else
                {
                    printf("#");
                }
            }
        }

        printf("\n");
    }

    return 0;
}
