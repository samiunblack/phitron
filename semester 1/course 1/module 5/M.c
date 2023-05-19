#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);

    int first_digit = x;

    while(first_digit >= 10)
    {
        first_digit = first_digit/10;
    }

    if(first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}