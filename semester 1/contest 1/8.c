#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        int even = 0;
        int odd = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(n % 2 != 0)
        {
            printf("-1\n");
        }
        else if(even == odd)
        {
            printf("0\n");
        }
        else
        {
            int half = n / 2;
            int count = abs(odd - half);

            printf("%d\n", count);
        }
    }

    return 0;
}