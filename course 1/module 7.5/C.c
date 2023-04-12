#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if(a > 0)
        {
            arr[i] = 1;
        }
        else if(a == 0)
        {
            arr[i] = 0;
        }
        
        else {
            arr[i] = 2;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}