#include <stdio.h>
 
int main() {
    char a[] = "Black";
    printf("%s\n", a);

    int size = sizeof(a)/sizeof(char);
    printf("%d", size);

    return 0;
}