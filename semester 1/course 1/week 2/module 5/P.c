#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int a;
    scanf("%d", &a);
 
    int first_digit = a / 1000;
 
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