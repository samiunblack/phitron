#include <stdio.h>
#include <limits.h>
#include <math.h>
 
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int min = INT_MAX;
    int count = 0;
    double ele = (n * 1.0)/ (k * 1.0);
    int element = ceil(ele);
    int arr[element];
    int idx = 0;
    for(int i = 1; i <= n; i++)
    {
        count++;
        int a;
        scanf("%d", &a);

        if(a < min)
        {
            min = a;
        }

        if(count == k)
        {
            arr[idx] = min;
            min = INT_MAX;
            count = 0;
            idx++;
        }

        if(i == n)
        {
            arr[idx] = min;
        }
    }

    for(int i = 0; i < element; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}