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

    printf("%s\n", smaller ? "true" : "false");
    printf("%s\n", greater ? "true" : "false");
    printf("%s\n", smaller_equal ? "true" : "false");
    printf("%s\n", greater_equal ? "true" : "false");
    printf("%s\n", equal ? "true" : "false");
    printf("%s\n", not_equal ? "true" : "false");

    return 0;
}