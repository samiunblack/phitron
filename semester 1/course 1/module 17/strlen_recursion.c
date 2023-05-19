#include <stdio.h>

int string_length(char *s, int i)
{
    if(s[i] == '\0') return 0;

    int length = 1 + string_length(s, i + 1);
    return length;
}

int main() {
    char s[100] = "Programming Hero";
    printf("%d", string_length(s, 0));
    return 0;
}