#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1001];
    fgets(s, 1001, stdin);

    int capital_count = 0;
    int small_count = 0;
    int space_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            capital_count++;
        }
        else if (islower(s[i])) {
            small_count++;
        }
        else if (isspace(s[i])) {
            space_count++;
        }
    }

    printf("Capital - %d\n", capital_count);
    printf("Small - %d\n", small_count);
    printf("Spaces - %d\n", space_count);

    return 0;
}