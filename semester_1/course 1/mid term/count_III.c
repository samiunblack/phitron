#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    char s[10001];
    scanf("%s", s);

    int arr[26] = {0};

    for(int i = 0; i < strlen(s); i++)
    {
        arr[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', arr[i]);
    }
    

    return 0;
}