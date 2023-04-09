#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(n == 1)
        {
            printf("-1");
            break;
        }
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}