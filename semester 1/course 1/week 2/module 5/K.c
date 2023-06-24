#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
 
    int max = a;
    int min = a;
 
    if(a > b)
    {
        if(a > c)
        {
            max = a;
 
            if(b > c)
            {
                min = c;
            }
            else {
                min = b;
            }
        }
        else
        {
            max = c;
 
            min = b;
        }
    }
    else {
        if(b > c)
        {
            max = b;
 
            if(a > c)
            {
                min = c;
            }
            else
            {
                min = a;
            }
        }
        else {
            max = c;
            min = a;
        }
    }
 
    printf("%d %d", min, max);
 
 
    return 0;
}