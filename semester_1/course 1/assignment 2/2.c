#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n <= 0)
    {
        for(int i = n; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
      for(int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }  
    }

    return 0;
}