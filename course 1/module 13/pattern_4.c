#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int k = -1;
    int p = n;
    for(int i = 0; i < n * 2; i++)
    {

        if(i < n)
        {
            k += 2;
            p--;
        }
        else {
            k -= 2;
            p++;
        }

        for(int j = 0; j < p; j++)
        {
            printf(" ");
        }


        for(int j = 0; j < k; j++)
        {
            printf("*");
        }


        printf("\n");
    }
    
    return 0;
}