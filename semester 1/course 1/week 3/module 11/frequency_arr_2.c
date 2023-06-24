#include <stdio.h>
#include <string.h>
 
int main() {
    char a[100];
    scanf("%s", a);

    int arr[26] = {0};

    for(int i = 0; i < strlen(a); i++)
    {
        arr[a[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(arr[i] != 0)
        {
            printf("%c: %d\n", i + 'a', arr[i]);
        }
    }
    printf("\n");
    
    for(int i = 0; i < strlen(a); i++)
    {
        printf("%c: %d\n", a[i], arr[a[i] - 'a']);
    }

    printf("\n");
    
    for(int i = 0; i < strlen(a); i++)
    {     
        if(arr[a[i] - 'a'] != 0)
        {
            printf("%c: %d\n", a[i], arr[a[i] - 'a']);
            arr[a[i] - 'a'] = 0;
        }
    }

    return 0;
}