#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if(a == 0)
        {
            printf("0\n");
            continue;
        }

        while(a != 0)
        {
            printf("%d ", a % 10);
            a /= 10;
        }
        printf("\n");
    }

    return 0;
}