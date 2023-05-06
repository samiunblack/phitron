#include <stdio.h>

int string_length(char *s, int i)
{
    if(s[i] == '\0')
    {
        return 0;
    }

    int count = string_length(s, i + 1);
    return count + 1;
}

int main() {
    char s[100] = "Black";
    printf("%d", string_length(s, 0));
    return 0;
}