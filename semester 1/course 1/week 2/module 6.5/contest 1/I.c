#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);

    int last = n % 10;
    int first = (n/10) % 103;

    if(first < last)
    {
        int temp = last;
        last = first;
        first = temp;
    }

    if((first == 0 || last == 0) || first % last == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}