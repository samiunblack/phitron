#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = 0;
    int odd = 0;
    int div_3_5 = 0;
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
        if(arr[i] % 3 == 0 && arr[i] % 5)
        {
            div_3_5++;
        }

    }

    return 0;
}