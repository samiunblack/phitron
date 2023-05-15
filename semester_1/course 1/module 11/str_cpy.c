#include <stdio.h>
#include <string.h> 

int main() {
    char a[100], b[100];

    scanf("%s %s", a, b);

    int i;
    for(i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }

    printf("%s\n", a);


    //built in
    scanf("%s %s", a, b);
    strcpy(a, b);

    printf("%s", b);

    return 0;
}