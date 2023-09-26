#include <stdio.h>
#include <string.h>
 
int main() {
    char s[10001];
    scanf("%s", s);

    char word[] = "hello";
    int current = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == word[current])
        {
            current++;
        }
        if(current >= 5)
        {
            break;
        }
    }

    if(current >= 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}