#include <stdio.h>
#include <limits.h> 

int main() {
    int t;
    scanf("%d", &t);

    for(int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int s;
        scanf("%d", &s);

        int position = -1;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == s)
            {
                position = i + 1;
                break;
            }
        }

        if(position == -1)
        {
            printf("Case %d: Not Found\n", k + 1);
        }
        else
        {
            printf("Case %d: %d\n", k + 1, position);
        }
    }

    return 0;
}
