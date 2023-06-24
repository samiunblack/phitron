#include <stdio.h>
 
int main() {
    int x = 10;
    printf("%d\n", &x);

    int* p = &x;

    printf("%d\n", p);

    //de-reference
    printf("%d\n", *p);
    
    *p = 20;
    printf("%d", x);
    

    return 0;
}