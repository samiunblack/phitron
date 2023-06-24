#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1001];
    scanf("%s", s);

    int cap = 0;
    int small = 0;

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            cap++;
        }
        else 
        {
            small++;
        }
    }

    printf("%d %d", cap, small);

    return 0;
}