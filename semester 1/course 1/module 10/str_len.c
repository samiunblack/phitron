#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    fgets(a, 100, stdin);

    int st = strlen(a);

    printf("%d", st);

    return 0;
}