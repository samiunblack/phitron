#include <stdio.h>
 
int main() {
    char a[6];

    for(int i = 0; i < 6; i++)
    {
        scanf("%c", &a[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");

    int size = sizeof(a)/sizeof(char);
    printf("%d", size);

    return 0;
}