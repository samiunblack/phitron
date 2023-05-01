#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int s = n - 1;
    int k = 1;

    for(int i = 0; i < n * 2; i++)
    {
        if(i < n)
        {
            for(int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for(int j = 0; j < k; j++)
            {
                printf("*");
            }
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;  
          for(int j = 0; j < s; j++)
            {
                printf(" ");
            }
          for(int j = 0; j < k; j++)
            {
                printf("*");
            }

            
        }

        printf("\n");
    }

    return 0;
}