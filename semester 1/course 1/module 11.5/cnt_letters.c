#include <stdio.h>
#include <string.h>
 
int main() {
    int freq[26] = {0};

    char c;
    while(scanf("%c", &c) != EOF)
    {
        freq[c - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}