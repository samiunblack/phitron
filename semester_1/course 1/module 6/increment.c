#include <stdio.h>
 
int main() {
    int i = 10;
    int x = i++; // x = 10  cause x gets i before the update [post increment]
    int y = ++i; // y = 12 cause y gets i after the update; [pre increment]

    printf("%d %d", x, y);

    return 0;
}