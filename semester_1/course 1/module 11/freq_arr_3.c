#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);

    int arr[52] = {0};

    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            arr[a[i] - 'A']++;
        }
        else {
            arr[a[i] - 71]++;
        }
    }


    for(int i = 0; i < 52; i++)
    {
        if(arr[i] != 0)
        {
            if(i < 26)
            {
                printf("%c: %d\n", i + 'A', arr[i]);
            }
            else {
                printf("%c: %d\n", i + 71, arr[i]);
            }
        }
    }
    printf("\n");
    

    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            printf("%c: %d\n", a[i], arr[a[i] - 'A']);
        }
        else {
            printf("%c: %d\n", a[i], arr[a[i] - 71]);
        }
    }
    printf("\n");
    

    for(int i = 0; i < strlen(a); i++)
    {     
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            if(arr[a[i] - 'A'] != 0)
            {
                printf("%c: %d\n", a[i], arr[a[i] - 'A']);
                arr[a[i] - 'A'] = 0;
            }
        }
        else {
            if(arr[a[i] - 71] != 0)
            {
                printf("%c: %d\n", a[i], arr[a[i] - 71]);
                arr[a[i] - 71] = 0;
            }
        }
    }

    return 0;
}