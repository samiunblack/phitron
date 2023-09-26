#include <stdio.h>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        printf("%d - ", i);
        if(i % 2 == 0){
            printf("even\n", i);
        }
        else {
            printf("odd\n", i);
        }
    }

    return 0;
}