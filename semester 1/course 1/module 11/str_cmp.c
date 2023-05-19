#include <stdio.h>
#include <string.h>
 
int main() {
    char a[100], b[100];

    scanf("%s %s", a, b);

    int i = 0;
    while(1)
    {
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("%s %s\n", a, b);
            break;
        }

        else if(a[i] == '\0')
        {
            printf("%s %s\n", a, b);
            break;
        }
        else if(b[i] == '\0')
        {
            printf("%s %s\n", b, a);
            break;
        }
        else {
            if(a[i] < b[i])
            {
                printf("%s %s\n", a, b);
                break;
            }
            else if(a[i] > b[i])
            {
                printf("%s %s\n", b, a);
                break;
            }
        }
        i++;
    }
    

    if(strcmp(a, b) > 0)
    {
        printf("%s %s", b, a);
    }
    else
    {
        printf("%s %s", a, b);
    }

    return 0;
}