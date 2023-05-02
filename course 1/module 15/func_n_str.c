#include <stdio.h>

void take_str(char *c);

int main() {
    char s[] = "Hello World";
    take_str(s);
    return 0;
}

void take_str(char *c)
{
    printf("%s\n", c);
}