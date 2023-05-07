#include <stdio.h>

void fun()
{
    printf("Fun\n");
    fun();
}

int main() {
    fun();
    //stack overflow
    return 0;
}