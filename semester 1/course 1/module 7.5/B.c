#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    bool found = false;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            printf("%d", i);
            found = true;
            break;
        }
    }

    if(!found)
    {
        printf("-1");
    }

    return 0;
}