#include <stdio.h>

char capital_to_small(char c);

int main() {
    char c;
    scanf("%c", &c);

    printf("%c", capital_to_small(c));
    
    return 0;
}

char capital_to_small(char c)
{
    char small = c + 32;
    return small;
}