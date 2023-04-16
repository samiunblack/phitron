#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1000001];
    scanf("%s", s);

    long long sum = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        sum += s[i] - '0';
    }

    printf("%lld", sum);

    return 0;
}