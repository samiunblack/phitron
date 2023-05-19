#include <stdio.h>
 
int main() {
    char a;
    scanf("%c", &a);

    if(a == 'z')
    {
        printf("a");
    }
    else
    {
        int b = a + 1;
        printf("%c", b);
    }

    return 0;
}