#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    int b = 20;

    bool smaller = a < b;
    bool greater = a > b;
    bool smaller_equal = a <= b;
    bool greater_equal = a >= b;
    bool equal = a == b;
    bool not_equal = a != b;

    
    bool and = smaller && greater;
    bool or = smaller || greater;

    printf("%s\n", and ? "true" : "false");
    printf("%s\n", or ? "true" : "false");

    return 0;
}