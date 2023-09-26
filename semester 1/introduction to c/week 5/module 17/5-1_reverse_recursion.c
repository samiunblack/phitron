#include <stdio.h>

void print(int n)
{
    if(n > 5) return;
    
    print(n + 1);
    printf("%d ", n);
}

int main() {
    print(1);

    return 0;
}