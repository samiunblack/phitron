#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);

    while(n--)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int sLen = strlen(s);
        int tLen = strlen(t);

        int min = sLen > tLen ? tLen : sLen;

        for(int i = 0; i < min; i++)
        {
            printf("%c%c", s[i], t[i]);
        }

        if(sLen - min > 0)
        {
            for(int i = min; i < sLen; i++)
            {
                printf("%c", s[i]);
            }
        }
        else {
            for(int i = min; i < tLen; i++)
            {
                printf("%c", t[i]);
            }
        }
        printf("\n");
    }

    return 0;
}