#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char a;
    scanf("%c", &a);
 
    if(islower(a))
    {
        printf("%c", toupper(a));
    }
    else {
        printf("%c", tolower(a));
    }
 
    return 0;

    /* phitron solution
        char a;
        scanf("%c", &a);

        if(a >= 'a' && a <= 'z')
        {
            int ans = a - 32;
            printf("%c", ans);
        }
        else
        {
            int ans = a + 32;
            printf("%c", ans);
        }

        return 0;
    */
}