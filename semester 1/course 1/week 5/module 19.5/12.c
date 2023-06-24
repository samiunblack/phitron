#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int alisha = 0, bidisha = 0;
    for(int i = 0; i < n; i++)
    {
        char a, b;
        scanf("\n%c %c", &a, &b);
        if(a > b)
        {
            alisha++;
        }
        else if(b > a)
        {
            bidisha++;
        }
    }

    if(alisha > bidisha)
    {
        printf("Alisha");
    }
    else
    {
        printf("Bidisha");
    }

    return 0;
}