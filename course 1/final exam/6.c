#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int p = 0, t = 0;
    for(int i = 0; i < n; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        if(a > b)
        {
            t++;
        }
        else if(b > a)
        {
            p++;
        }
    }

    if(p > t)
    {
        printf("Pathan");
    }
    else if(t > p)
    {
        printf("Tiger");
    }
    else
    {
        printf("Draw");
    }

    return 0;
}