#include <stdio.h>
#include <string.h>

int is_palindrome(char *s)
{
    int l = 0, r = strlen(s) - 1;

    while(l < r)
    {
        if(s[l] != s[r])
        {
            return 0;
        }
        l++;
        r--;
    }

    return 1;
}

int main() {
    char s[11];
    scanf("%s", s);

    if(is_palindrome(s) == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}