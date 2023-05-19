#include <stdio.h>
#include <string.h>

void palindrome(char *s, int i, int j, int *flag)
{
    if(i >= j) return;

    if(s[i] != s[j]) *flag = 0;
    palindrome(s, i + 1, j - 1, flag);
}

int main() {
    char s[1001];
    scanf("%s", s);
    int flag = 1;
    palindrome(s, 0, strlen(s) - 1, &flag);

    if(flag == 0) printf("NO");
    else printf("YES");

    return 0;
}