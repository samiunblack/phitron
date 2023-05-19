#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--)
    {
        char s[100001];
        scanf("%s", s);

        int found = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == '0')
            {
                if(i + 2 < strlen(s) && (s[i + 1] == '1' && s[i + 2] == '0'))
                {
                   found = 1;
                   break;
                }
            }
            if(s[i] == '1')
            {
                if(i + 2 < strlen(s) && (s[i + 1] == '0' && s[i + 2] == '1'))
                {
                   found = 1;
                   break;
                }
            }
        }

        if(found == 0)
        {
            printf("Bad\n");
        }
        else 
        {
            printf("Good\n");
        }
    }

    return 0;
}