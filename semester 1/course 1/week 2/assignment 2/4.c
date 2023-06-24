#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int ar[n];

    int i = 0;
    while(i < n)
    {
        scanf("%d", &ar[i]);
        i++;
    }

    int y, y_pos;
    scanf("%d %d", &y, &y_pos);

    ar[y] = y_pos;

    int j = n - 1;
    for(int i = j; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}