#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 7 == 0){
            printf("%d\n", i);
        }
    }
}