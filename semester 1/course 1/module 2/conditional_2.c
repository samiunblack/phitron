#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Let's eat burger");
    }

    else if( tk >= 50) {
        printf("Let's eat fuchka");
    }

    else {
        printf("Let's not eat");
    }

    return 0;
}