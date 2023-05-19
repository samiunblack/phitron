#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000001];
    fgets(s, 1000001, stdin);

    int count = 1, i = 0;
    for(i = 1; i < strlen(s); i++)
    {

        if(!(s[i] >= 'A' && s[i] <= 'z') && (s[i+1] >= 'A' && s[i+ 1] <= 'z'))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}