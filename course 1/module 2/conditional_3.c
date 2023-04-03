#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if(tk >= 5000)
    {
        printf("Let's go to cox's bazar.");

        if(tk >= 10000){
            printf("\nLet's go to saint martin too.");
        }
    }
    else {
        printf("Nah, let's not go anywhere");
    }

    return 0;
}