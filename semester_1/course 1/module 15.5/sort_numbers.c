#include <stdio.h>

void arr_cpy(int *arr, int *arrcpy, int n);
void sort(int *arr, int n);
void swap(int *a, int *b);
void arr_print(int *arr, int n);

int main() {
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

    int ar[3];
    arr_cpy(arr, ar, 3);

    sort(ar, 3);

    arr_print(ar, 3);
    
    printf("\n");
    
    arr_print(arr, 3);

    return 0;
}

void arr_cpy(int *arr, int *arrcpy, int n)
{
    for(int i = 0; i < n; i++)
    {
        arrcpy[i] = arr[i];
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int n)
{
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void arr_print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}