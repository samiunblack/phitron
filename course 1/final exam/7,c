#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    if(n % 2 == 0)
    {
        printf("%d %d", arr[n / 2 - 1], arr[n / 2]);    
    }
    else{
        printf("%d", arr[n / 2]);
    }

    return 0;
}