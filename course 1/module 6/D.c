#include <stdio.h>
 
int main() {
    int c;
    while (scanf("%d", &c) != EOF) {
        if(c == 1999)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong");
        }
    }
    return 0;
}