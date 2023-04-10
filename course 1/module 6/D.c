#include <stdio.h>
 
int main() {
    int c;
    while (scanf("%d", &c) != EOF) {
        if(c == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}