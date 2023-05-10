#include <stdio.h>
 
int main() {
    char s[5];
    char a, b, c;
    scanf("%s %c %c %c", s, &a, &b, &c);

    for(int i = 0; i < 4; i++)
    {
        if(s[i] != a && s[i] != b && s[i] != c)
        {
            printf("%c", s[i]);
            break;
        }
    }    

    return 0;
}