#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n];
    scanf("%s", &s);

    for(int i = 0; i < strlen(s); i++)
    {
        for(int j = 0; j < strlen(s); j++)
        {
            if(s[j] > s[i])
            {
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }

    printf("%s", s);

    return 0;
}