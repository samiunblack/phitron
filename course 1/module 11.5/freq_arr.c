#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    int freq[m];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < m ; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        freq[arr[i] - 1]++;
    }

    for(int i = 0; i < m; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}