#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char *a, int n, int i)
{
    if(i == n) return 0;
    int ans = count_vowels(a, n, i + 1);
    if(tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u')
    {
        return 1 + ans;
    }
    else
    {
        return ans;
    }
}

int main() {
    char a[201];
    fgets(a, 201, stdin);
    printf("%d", count_vowels(a, strlen(a), 0));
    return 0;
}