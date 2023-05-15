#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int half = n / 2;

    int l = 0;
    int r = n - 1; 

    for(int i = 0; i < n / 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == l)
            {
                printf("\\");
            }
            else if(j == r)
            {
                printf("/");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        l++;
        r--;
    }

    for(int i = 0; i < n; i++)
    {
        if(i == n / 2)
        {
            printf("X");
        }
        else
        {
            printf("*");
        }
    }
    printf("\n");


    l -= 1;
    r += 1;
    for(int i = n / 2 + 1; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == l)
            {
                printf("/");
            }
            else if(j == r)
            {
                printf("\\");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
        l--;
        r++;
    }

    /*
        k = 0;
        on k \
        other *
        k increase by one
    */

    return 0;
}