#include <stdio.h>

int char_to_ascii(char c); 

int main() {
    
    char c;
    scanf("%c", &c);
    printf("%d", char_to_ascii(c));
    return 0;
}

int char_to_ascii(char c)
{
    return c;
}