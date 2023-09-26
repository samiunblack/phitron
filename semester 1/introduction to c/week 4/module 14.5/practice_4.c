#include <stdio.h>

char small_to_capital(char c);

int main() {
    char c;
    scanf("%c", &c);

    printf("%c", small_to_capital(c));
    
    return 0;
}

char small_to_capital(char c)
{
    char capital = c - 32;
    return capital;
}