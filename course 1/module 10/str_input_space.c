#include <stdio.h>
#include <string.h>
 
int main() {
    char str[100];
    //gets(str);
    fgets(str, 100, stdin);

    printf("%s", str);

    return 0;
}